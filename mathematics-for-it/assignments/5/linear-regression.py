import numpy as np
import pandas as pd
from matplotlib import pyplot as plt
from collections import OrderedDict

# load the data
train = pd.read_csv('random-linear-regression/train.csv')
test = pd.read_csv('random-linear-regression/test.csv')

# show few data points
train.head()

# get the training data and test data
train_x = train['x']
train_y = train['y']

test_x = test['x']
test_y = test['y']

# print the total number of data records of training data and testing data
print("Total number of training examples:%d" %(len(train_x)))
print("Total number of testing examples:%d" %(len(test_x)))

# Visualize data

# plotting training data
plt.plot(train_x, train_y, 'r.', label = 'train')
plt.xlabel('train_x')
plt.ylabel('train_y')
plt.legend()
plt.show()

# plotting testing data
plt.plot(test_x, test_y, 'b.', label = 'test')
plt.xlabel('test_x')
plt.ylabel('test_y')
plt.legend()
plt.show()

# function to apply the linear regression
def linear_reg(train_x, train_y, lr=0.0001, epochs=10):
    n = len(train_x)

    a0 = np.zeros((n))
    a1 = np.zeros((n))

    itr = 0
    while itr < epochs:
        y_predict = a0 + a1 * train_x
        error = (y_predict - train_y)
        sq_error = error**2
        mean_sq_error = np.sum(sq_error) / n
        
        d_a0 = 2 * np.sum(error) / n
        d_a1 = 2 * np.sum(error * train_x) / n
        
        # update the parameters
        a0 = a0 - lr * d_a0
        a1 = a1 - lr * d_a1
        
        print("loss after %d iterations: %.3f" %(itr, mean_sq_error))
        itr += 1
    
    return a0, a1

# function to visualize the model predictions
def visualize_model_predictions(test_x, test_y, a0, a1):
    y_predictions = []
    for i in range(100):
        y_predict = a0 + a1 * i
        y_predictions.append(y_predict)
    
    plt.plot(test_x, test_y, 'b.', label='test')
    line_values = range(len(y_predictions))
    plt.plot(list(line_values), y_predictions, color='black', label='predict')
    
    handles, labels = plt.gca().get_legend_handles_labels()
    by_label = OrderedDict(zip(labels, handles))
    plt.ylabel('y_values')
    plt.xlabel('x_values')
    plt.legend(by_label.values(), by_label.keys())
    plt.show()

# get the parameter values by applying the linear regression
a0, a1 = linear_reg(train_x, train_y)

# plot the regression line
visualize_model_predictions(test_x, test_y, a0, a1)

