Priority (PR)

- In linux, priority values can range between 0-139 in which 0-99 is for real time(? I think here, it means kernel space process) and 100-139 is for users.
- lower values indicates higher priority.

Nice Value(NI)

- these are user-space values that can be used to control the priority of the process.
- it can range between -20 to 19 where -20 is the highest, 0 is the default and 19 is lowest
- PR = NI + 20

Notes:

- reference link : https://medium.com/@chetaniam/a-brief-guide-to-priority-and-nice-values-in-the-linux-ecosystem-fb39e49815e0
- in the above article, they have used the commands "nice" and "renice" to create a process with given nice value and change its nice value at runtime respectively.



