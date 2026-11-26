# Micromouse Simulator

## 1. Giới thiệu dự án

Micromouse Simulator là ứng dụng C++ mô phỏng robot tự hành di chuyển trong
mê cung 2D. Phiên bản 0.1.0 thiết lập cấu trúc dự án và vòng đời ứng dụng;
các chức năng mê cung, robot, tìm đường và mô phỏng trực quan sẽ được phát
triển trong các buổi thực hành tiếp theo.

## 2. Công nghệ sử dụng

- C++17
- CMake 3.16 trở lên
- Git

## 3. Cấu trúc dự án

```text
MicromouseSimulator/
├── CMakeLists.txt
├── README.md
├── .gitignore
├── include/
│   └── app/
│       └── Application.h
├── src/
│   ├── app/
│   │   └── Application.cpp
│   └── main.cpp
├── docs/
│   ├── project-requirements.md
│   └── test-report.md
└── tests/
    └── ApplicationTests.cpp
```

## 4. Biên dịch dự án

Mở terminal tại thư mục gốc dự án, sau đó cấu hình và biên dịch bằng CMake:

```powershell
cmake -S . -B build
cmake --build build
```

Chạy bộ kiểm thử bằng lệnh:

```powershell
ctest --test-dir build --output-on-failure
```

## 5. Chạy chương trình

Tệp thực thi được tạo trong thư mục `build`. Nếu dùng Visual Studio generator,
chạy:

```powershell
.\build\Debug\MicromouseSimulator.exe
```

Nếu dùng generator một cấu hình như Ninja hoặc MinGW Makefiles, chạy:

```powershell
.\build\MicromouseSimulator.exe
```

Phiên bản khởi tạo in thông báo khi bắt đầu, chạy và kết thúc ứng dụng.

## 6. Quy trình phát triển

- `main`: chứa các phiên bản ổn định
- `develop`: nhánh tích hợp
- `feature/*`: phát triển từng chức năng

Xem [docs/project-requirements.md](docs/project-requirements.md) để biết các
yêu cầu và Product Backlog ban đầu.
