import constants
import math
import PlankLaw

w = 500e-9 
T = 5000
B = PlankLaw.plankLaw(w, T)

print("The spectral radiance is:", B, "W/sr/m^3")