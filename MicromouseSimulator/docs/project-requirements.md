# Micromouse Simulator: Yêu cầu dự án

## Bài toán và phạm vi

Micromouse Simulator là phần mềm phục vụ học tập, mô phỏng robot tự hành di
chuyển trong mê cung 16 x 16. Sản phẩm hoàn chỉnh của học phần dự kiến hỗ trợ
quản lý mê cung và trạng thái robot, mô phỏng cảm biến tường và chuyển động,
tìm đường, đồng thời hiển thị kết quả mô phỏng.

Phiên bản 0.1.0 chỉ xây dựng nền tảng dự án: điểm bắt đầu chương trình C++17,
lớp `Application` điều phối vòng đời ứng dụng, cấu hình biên dịch CMake và
kiểm thử tự động cơ bản. Mô hình mê cung, hành vi robot, thuật toán tìm đường,
lưu trữ dữ liệu và giao diện đồ họa chưa thuộc phạm vi phiên bản này.

## Yêu cầu chức năng

| Mã | Yêu cầu |
| --- | --- |
| FR01 | Tạo hoặc khởi tạo mê cung. |
| FR02 | Thiết lập vị trí xuất phát của robot. |
| FR03 | Thiết lập vị trí đích trong mê cung. |
| FR04 | Quản lý vị trí và hướng của robot. |
| FR05 | Mô phỏng cảm biến phát hiện các bức tường xung quanh. |
| FR06 | Tìm đường đi trong mê cung. |
| FR07 | Mô phỏng robot di chuyển trong mê cung. |
| FR08 | Hiển thị quá trình mô phỏng. |
| FR09 | Lưu và nạp dữ liệu mê cung. |
| FR10 | Hiển thị kết quả mô phỏng. |

## Yêu cầu phi chức năng

| Mã | Yêu cầu |
| --- | --- |
| NFR01 | Sử dụng C++17 trở lên. |
| NFR02 | Tổ chức mã nguồn thành các module rõ ràng. |
| NFR03 | Hỗ trợ cấu hình và biên dịch dự án bằng CMake. |
| NFR04 | Tách biệt thuật toán tìm đường khỏi công nghệ hiển thị. |
| NFR05 | Cho phép kiểm thử từng module riêng lẻ. |
| NFR06 | Có khả năng mở rộng giao diện sang 3D hoặc VR trong tương lai. |
| NFR07 | Có tài liệu hướng dẫn biên dịch và sử dụng. |

## Product Backlog ban đầu

| Mã | Công việc | Ưu tiên | Trạng thái |
| --- | --- | --- | --- |
| US01 | Khởi tạo dự án C++ và cấu trúc biên dịch. | Cao | Đã triển khai; chờ xác minh biên dịch |
| US02 | Thiết lập Git Repository và quy trình làm việc nhóm. | Cao | Chưa thực hiện |
| US03 | Thiết kế cấu trúc dữ liệu mê cung. | Cao | Chưa thực hiện |
| US04 | Xây dựng mô hình robot. | Cao | Chưa thực hiện |
| US05 | Cài đặt các thuật toán tìm đường. | Cao | Chưa thực hiện |
| US06 | Xây dựng giao diện mô phỏng. | Cao | Chưa thực hiện |

## Vai trò nhóm ban đầu

| Vai trò | Trách nhiệm |
| --- | --- |
| Trưởng nhóm (Project Lead) | Quản lý yêu cầu, tiến độ và điều phối tích hợp. |
| Lập trình viên (Developer) | Xây dựng cấu trúc dự án và cài đặt mã nguồn. |
| Kiểm thử/Tích hợp (Tester/Integration) | Kiểm tra biên dịch, kiểm thử và tích hợp công việc. |

Nhóm dự án tự bổ sung tên thành viên và thông tin Repository.
