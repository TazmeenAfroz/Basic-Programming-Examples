import constants
import math

def plankLaw(wavelength, temperature):
     """Calculate the intensity of a blackbody at a given wavelength and temperature."""
     c = constants.c
     h = constants.h
     k = constants.k
     #Planck's Law: B_λ(T) = (2 * h * c^2 / λ^5) * 1 / (exp(h * c / (λ * k * T)) - 1)
     B_lambda = (2 * h * c**2 / wavelength**5) * 1 / (math.exp(h * c / (wavelength * k * temperature)) - 1)
     return B_lambda

