import numpy as np
import matplotlib.pyplot as plt

data1 = np.loadtxt("sinfriccion.dat")
data2 = np.loadtxt("friccion.dat")

plt.figure()
plt.title("Tiro parabólico")
plt.xlabel("x")
plt.ylabel("y")
plt.plot(data1[:,0], data1[:,1])
plt.plot(data2[:,0], data2[:,1])

plt.savefig("tiro.png")