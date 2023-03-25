import constant
import math
def TimePeriod(l) :

    # return the time period of a pendulum of length l

    T = 2 * constant.pi * math.sqrt(l / constant.g)

    return T
