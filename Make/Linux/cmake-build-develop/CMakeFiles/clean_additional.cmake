# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Develop")
  file(REMOVE_RECURSE
  "CMakeFiles/DeployDialog_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DeployDialog_autogen.dir/ParseCache.txt"
  "CMakeFiles/SimRobotCore2D_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimRobotCore2D_autogen.dir/ParseCache.txt"
  "CMakeFiles/SimRobotCore2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimRobotCore2_autogen.dir/ParseCache.txt"
  "CMakeFiles/SimRobotEditor_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimRobotEditor_autogen.dir/ParseCache.txt"
  "CMakeFiles/SimRobot_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimRobot_autogen.dir/ParseCache.txt"
  "CMakeFiles/SimulatedNao_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimulatedNao_autogen.dir/ParseCache.txt"
  "CMakeFiles/qtpropertybrowser_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtpropertybrowser_autogen.dir/ParseCache.txt"
  "DeployDialog_autogen"
  "SimRobotCore2D_autogen"
  "SimRobotCore2_autogen"
  "SimRobotEditor_autogen"
  "SimRobot_autogen"
  "SimulatedNao_autogen"
  "qtpropertybrowser_autogen"
  )
endif()
