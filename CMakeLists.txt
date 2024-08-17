CMAKE_MINIMUM_REQUIRED(VERSION 3.3)
PROJECT(weather_forecast VERSION 1.0 LANGUAGES CXX)

# Qt Quick程序中的QRC资源文件需要用rcc来进行预处理，生成相应.h和.cpp文件。
# QObject派生的C++类也需要通过moc进行处理。这些都是编译系统中所谓的Rules。
# CMake中通过打开下面两个选项可以自动对这些后缀的文件进行相应处理
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# 由于生成的C++文件都是放在编译目录里的（在Shadow Building中有别于源码目录），
# 所以还需要将编译目录包含到Include目录，否则编译器会找不到这些头文件：
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

set(CMAKE_GENERATOR "MinGW Makefiles")
# set(CMAKE_PREFIX_PATH "D:/Qt/Qt5.12.12/5.12.12/mingw73_64/lib/cmake")
#set(Qt5_DIR /home/HZ/qt-5.12.5/lib)
find_package(Qt5 COMPONENTS Widgets Core Gui Network Charts REQUIRED)

#添加qt包include头文件
include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5Gui_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Network_INCLUDE_DIRS})
include_directories(${Qt5Charts_INCLUDE_DIRS})


MESSAGE("=================================================================")
if(DEFINED Qt5_FOUND)

    MESSAGE(STATUS "find Qt5_FOUND: ${Qt5_FOUND}")
    MESSAGE(STATUS "Qt5Widgets_INCLUDE_DIRS: ${Qt5Widgets_INCLUDE_DIRS}")
    MESSAGE(STATUS "Qt5Gui_INCLUDE_DIRS: ${Qt5Gui_INCLUDE_DIRS}")
    MESSAGE(STATUS "Qt5Core_INCLUDE_DIRS: ${Qt5Core_INCLUDE_DIRS}")
    MESSAGE(STATUS "Qt5Network_INCLUDE_DIRS: ${Qt5Network_INCLUDE_DIRS}")
    MESSAGE(STATUS "Qt5Charts_INCLUDE_DIRS: ${Qt5Charts_INCLUDE_DIRS}")
else()
    MESSAGE(STATUS "not find Qt5_FOUND: ${Qt5_FOUND}")
endif()
MESSAGE("=================================================================")

# 设置qrc文件路径

set("${PROJECT_NAME}_resource_dir" "${CMAKE_CURRENT_SOURCE_DIR}/resource") 
file(GLOB_RECURSE "${PROJECT_NAME}_qrc" "${${PROJECT_NAME}_resource_dir}/*.qrc")

set(Qrc_Files
    ${${PROJECT_NAME}_qrc}
)
set(CMAKE_AUTORCC_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/rcc")
MESSAGE(STATUS "Qrc_Files: ${Qrc_Files}")


# 设置ui文件路径
set("${PROJECT_NAME}_ui_dir" "${CMAKE_CURRENT_SOURCE_DIR}/ui") 
file(GLOB_RECURSE "${PROJECT_NAME}_ui" "${${PROJECT_NAME}_ui_dir}/*.ui")
set(Ui_Files
    ${${PROJECT_NAME}_ui}
)
MESSAGE(STATUS "Ui_Files: ${Ui_Files}")
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)
set(CMAKE_AUTOUIC_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include")


set(CMAKE_AUTOMOC_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/src")




# 添加项目头文件路径
set("${PROJECT_NAME}_include_dir" "${CMAKE_CURRENT_SOURCE_DIR}/include") 
include_directories(${${PROJECT_NAME}_include_dir})
file(GLOB_RECURSE "${PROJECT_NAME}_include" "${${PROJECT_NAME}_include_dir}/*.h")


# 添加项目源文件路径
set("${PROJECT_NAME}_src_dir" "${CMAKE_CURRENT_SOURCE_DIR}/src") 
file(GLOB_RECURSE "${PROJECT_NAME}_src" "${${PROJECT_NAME}_src_dir}/*.cpp")

# 生成可执行文件
add_executable(     
    ${PROJECT_NAME}
    ${${PROJECT_NAME}_src}
    ${${PROJECT_NAME}_include}
    ${${PROJECT_NAME}_ui}
    ${${PROJECT_NAME}_qrc}
)

# 配置链接库
target_link_libraries(
    ${PROJECT_NAME} 
    Qt5::Widgets
    Qt5::Core
    Qt5::Gui
    Qt5::Network
)

