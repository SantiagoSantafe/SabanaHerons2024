# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/jose/Documents/SabanaHerons2024/Make/Linux"
  "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/src/Nao-build"
  "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix"
  "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/tmp"
  "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/src/Nao-stamp"
  "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/src"
  "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/src/Nao-stamp"
)

set(configSubDirs Debug;Develop;Release)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/src/Nao-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/jose/Documents/SabanaHerons2024/Make/Linux/cmake-build-develop/Nao-prefix/src/Nao-stamp${cfgdir}") # cfgdir has leading slash
endif()
