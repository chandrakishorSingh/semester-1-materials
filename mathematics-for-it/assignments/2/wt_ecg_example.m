load('ECG_data.mat');

levelNumber = 6;
wt = modwt(ECG, 'sym4', levelNumber);

[numScales, ~] = size(wt);

fig = figure(1);
fig.Units = 'normalized';
fig.Position = [0 0 1 1];

subplot(numScales+1,1,1)
plot(ECG, 'r-')
title('Orginal ECG', 'FontSize', 14)
axis tight

for i=2:numScales+1
    
    subplot(numScales+1,1,i)
    plot(wt(i-1,:))
    title(strcat('Wavelet Scale 2^', string(i-2)), 'FontSize', 14)
    axis tight
end

xlabel('Time', 'FontSize', 14)

print('waveletTransform_signal_decomposition', '-dpng');

fig = figure(2);
fig.Units = 'normalized';
fig.Position = [0 0 1 1];

recwt = zeros(size(wt));

recwt(4,:) = wt(4,:);

recECG = imodwt(recwt,'sym4');

subplot(2,1,1)
plot(ECG, 'r-')
title('Orginal ECG', 'FontSize', 16)
xlabel('Time', 'FontSize', 14)
axis tight
subplot(2,1,2)
plot(recECG)
title('Reconstructed ECG', 'FontSize', 16)
xlabel('Time', 'FontSize', 14)
axis tight

print('waveletTransform_reconstructed_signal', '-dpng');

t = 1:length(ECG);

recECG = abs(recECG).^2;
[qrspeaks,locs] = findpeaks(recECG, t, 'MinPeakHeight', 0.35, 'MinPeakDistance',100);

fig = figure(3);
fig.Units = 'normalized';
fig.Position = [0 0 1 1];

plot(t,ECG)
hold on
plot(locs,ECG(locs),'ro', 'LineWidth',2)
xlabel('Time', 'FontSize', 14)
title('R Peaks Detected Using Reconstructed Signal from Wavelet Transform', ...
    'FontSize', 16)
axis tight
print('waveletTransform_rpeak_annotation', '-dpng');