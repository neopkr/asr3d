# ASR3D
Alien Shooter 3D Revisited!

# Build
```
[main] Building folder: d:/dev/AlienShooter3D/build 
[build] Starting build
[proc] Executing command: "C:\Program Files\CMake\bin\cmake.EXE" --build d:/dev/AlienShooter3D/build --config Debug --target ALL_BUILD -j 14 --
[build] MSBuild version 17.6.3+07e294721 for .NET Framework
[build] 
[build]   1>Checking Build System
[build]   Building Custom Rule D:/dev/AlienShooter3D/CMakeLists.txt
[build]   alien.cpp
[build]   events.cpp
[build] C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\memory(3166,1): error C2027: uso del tipo 'Scene' sin definir [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] D:\dev\AlienShooter3D\include\scenemanager.h(6,7): message : vea la declaración de 'Scene' [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\memory(3165,23): message : al compilar la función del miembro clase plantilla "void std::default_delete<Scene>::operator ()(_Ty *) noexcept const" [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build]           with
[build]           [
[build]               _Ty=Scene
[build]           ]
[build] C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\memory(3278,33): message : vea la primera referencia a "std::default_delete<Scene>::operator ()" en "std::unique_ptr<Scene,std::default_delete<Scene>>::~unique_ptr" [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] D:\dev\AlienShooter3D\include\scenemanager.h(15,1): message : vea la primera referencia a "std::unique_ptr<Scene,std::default_delete<Scene>>::~unique_ptr" en "SceneManager::~SceneManager" [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\memory(3202): message : Vea la referencia a la creación de una instancia de clase plantilla "std::default_delete<Scene>" que se está compilando [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] D:\dev\AlienShooter3D\include\scenemanager.h(10,28): message : Vea la referencia a la creación de una instancia de clase plantilla "std::unique_ptr<Scene,std::default_delete<Scene>>" que se está compilando [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\memory(3166,25): error C2338: static_assert failed: 'can't delete an incomplete type' [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\include\memory(3167,9): warning C4150: eliminación de puntero a tipo 'Scene' incompleto; no se ha llamado a un destructor [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build] D:\dev\AlienShooter3D\include\scenemanager.h(6,7): message : vea la declaración de 'Scene' [D:\dev\AlienShooter3D\build\AlienShooter.vcxproj]
[build]   vector.cpp
[build]   fsys.cpp
[build]   game.cpp
[build]   main.cpp
[build]   player.cpp
[build]   scene.cpp
[build]   window.cpp
[build]   Generando código...
[proc] The command: "C:\Program Files\CMake\bin\cmake.EXE" --build d:/dev/AlienShooter3D/build --config Debug --target ALL_BUILD -j 14 -- exited with code: 1
[driver] Build completed: 00:00:06.023
[build] Build finished with exit code 1
```