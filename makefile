cxx=g++-mingw-w64
proyecto3G: src/proyecto3G.cpp
g++ src/neobomberman-cpp -o src/proyecto3G -I include

cxx = x86_64-w64-mingw32-g++

runMascota : bin/runMascota
./bin/mascota

bin/mascota : src/mascota.cpp include/Mascota.hpp
$(CXX) src/mascota.cpp -o bin/mascota -I include

cleanMascota : bin/mascota
rm bin/mascota
