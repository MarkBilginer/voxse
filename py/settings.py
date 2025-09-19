from numba import njit
import numpy as np
import glm
import math

# Window resolution
WIN_RES = glm.vec2(1600, 900)
#WIN_RES = (1600, 900)

# colors
BG_COLOR = glm.vec3(0.1, 0.16, 0.25)
#BG_COLOR = (0.1, 0.16, 0.25, 0.10)