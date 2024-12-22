cmake_minimum_required(VERSION 3.10)

project(AlienShooter)

# Configurar la versión de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# Archivos fuente: buscar recursivamente todos los .cpp en src/**/**
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Establecer las rutas de los encabezados y bibliotecas de GLEW y GLFW
set(GLFW_INCLUDE_DIR "D:/dev/AlienShooter3D/motor/glfw-3.4.bin.WIN64/include")
set(GLFW_LIBRARY "D:/dev/AlienShooter3D/motor/glfw-3.4.bin.WIN32/lib-vc2022/glfw3.lib")

set(GLEW_INCLUDE_DIR "D:/dev/AlienShooter3D/motor/glew-2.1.0/include")
set(GLEW_LIBRARY "D:/dev/AlienShooter3D/motor/glew-2.1.0/lib/Release/Win32/glew32.lib")

# Set DLL
set(GLEW_DLL_PATH "D:/dev/AlienShooter3D/motor/glew-2.1.0/bin/Release/Win32/glew32.dll")

# Incluir las rutas para los encabezados de GLEW y GLFW
include_directories(${GLEW_INCLUDE_DIR} ${GLFW_INCLUDE_DIR} include)

# Crear el ejecutable
add_executable(AlienShooter ${SOURCES})

# Vincular las bibliotecas de OpenGL, GLEW y GLFW
target_link_libraries(AlienShooter
    OpenGL32      # OpenGL en Windows
    ${GLEW_LIBRARY}
    ${GLFW_LIBRARY}
)

# Copiar glew32.dll al directorio de compilación
add_custom_command(TARGET AlienShooter POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${GLEW_DLL_PATH}
    $<TARGET_FILE_DIR:AlienShooter>
)

# Si OpenGL no es encontrado automáticamente, asegúrate de agregar el siguiente código para localizar OpenGL en Windows.
find_package(OpenGL REQUIRED)
