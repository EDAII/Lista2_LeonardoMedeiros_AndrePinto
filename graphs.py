import matplotlib

from matplotlib import pyplot

xvector = list()
for i in range(10000):
    xvector.append(i)

# Insertion Sort
f = open("insertionSort", "r")
if (f.mode == 'r'):
    insertionSortData = f.read().split()
plotInsertion = list();
for i in range(10000):
    plotInsertion.append(float(insertionSortData[i]))


# Selection Sort
f = open("selectionSort", "r")
if (f.mode == 'r'):
    selectionSortData = f.read().split()
plotSelection = list();
for i in range(10000):
		plotSelection.append(float(selectionSortData[i]))


# Bubble Sort
f = open("bubbleSort", "r")
if (f.mode == 'r'):
    bubbleSortData = f.read().split()
plotBubble = list();
for i in range(10000):
	plotBubble.append(float(bubbleSortData[i]))


# Shell Sort gap: half
f = open("shellSortGapHalf", "r")
if (f.mode == 'r'):
    shellHalfSortData = f.read().split()
plotShellHalf = list();
for i in range(10000):
    plotShellHalf.append(float(shellHalfSortData[i]))


# Shell Sort gap: 3N+1
f = open("shellSortGap3N", "r")
if (f.mode == 'r'):
    shell3NSortData = f.read().split()
plotShell3N = list();
for i in range(10000):
    plotShell3N.append(float(shell3NSortData[i]))

fig, ax = pyplot.subplots()

pyplot.xlabel('Number of elements')
pyplot.ylabel('Time to compute')

ax.plot(xvector, plotInsertion, label='Insertion Sort Time')
ax.plot(xvector, plotSelection, label='Selection Sort Time')
ax.plot(xvector, plotBubble, label='Bubble Sort Time')
ax.plot(xvector, plotShellHalf, label='Shell Sort Half Time')
ax.plot(xvector, plotShell3N, label='Shell Sort 3N+1 Time')

pyplot.legend()
pyplot.grid()

ax.set_yticks([0.2, 0.4, 0.6])

pyplot.show()
