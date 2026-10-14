# MinusOne
MinusOne is a simple desktop app for musicians: load a backing track’s instrument stems, mute your part, and play along with the rest of the band.

## Requirements

- A C++20 compiler (GCC 11+, Clang 14+, or MSVC 2022)
- CMake 3.21 or newer
- Qt 6.5 or newer (Widgets module)

## Installing dependencies

### Fedora

```sh
sudo dnf install gcc-c++ cmake qt6-qtbase-devel
```

### Ubuntu / Debian

```sh
sudo apt install build-essential cmake qt6-base-dev
```

Ubuntu 24.04 or newer is needed; 22.04 ships Qt 6.2, which is too old.

### Arch Linux

```sh
sudo pacman -S base-devel cmake qt6-base
```

### macOS (Homebrew)

```sh
brew install cmake qt
```

### Windows, or a newer Qt than your distribution ships

Install Qt with the [Qt Online Installer](https://www.qt.io/download-qt-installer) and pass its location to CMake when configuring, for example:

```sh
cmake -S . -B build -DCMAKE_PREFIX_PATH=~/Qt/6.8.0/gcc_64
```

## Building

From the repository root:

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Running

```sh
./build/MinusOne
```

On macOS the app is built as a bundle: `open build/MinusOne.app`. On Windows, run `build\Release\MinusOne.exe` (Visual Studio generators) or `build\MinusOne.exe` (Ninja).
