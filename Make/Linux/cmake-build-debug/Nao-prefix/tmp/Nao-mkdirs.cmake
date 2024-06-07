# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/nao/SabanaHerons2024/Make/Linux"
  "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/src/Nao-build"
  "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix"
  "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/tmp"
  "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/src/Nao-stamp"
  "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/src"
  "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/src/Nao-stamp"
)

set(configSubDirs Debug;Develop;Release)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/src/Nao-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/nao/SabanaHerons2024/Make/Linux/cmake-build-debug/Nao-prefix/src/Nao-stamp${cfgdir}") # cfgdir has leading slash
endif()
