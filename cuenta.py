import numpy as np
import matplotlib
matplotlib.use("Agg")
import matplolib.pyplot as plt

t = np.loadtxt("tiempos.txt")
p = np.loadtxt("particiones.txt")

plt.plot(p,t)
plt.savefig("cuenta.pdf")
