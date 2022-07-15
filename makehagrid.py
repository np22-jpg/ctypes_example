import ctypes

def hagrid(y_height,starting_velocity, time_steps,object_mass):
  c_y_height = ctypes.c_double(y_height)
  c_starting_velocity = ctypes.c_double(starting_velocity)
  c_time_steps = ctypes.c_double(time_steps)
  c_object_mass = ctypes.c_double(object_mass)

  testlib = ctypes.CDLL('./libhagrid.so')
  testlib.graph(c_y_height,c_starting_velocity,c_time_steps,c_object_mass)