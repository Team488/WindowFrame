
# ==============
# ADDED MANUALLY
# ==============

# Find system dependencies
list(APPEND GAZEBO_LIBRARIES ws2_32 Iphlpapi)

# Find TBB
find_library(TBB_LIBRARY tbb)
list(APPEND GAZEBO_LIBRARIES ${TBB_LIBRARY})
