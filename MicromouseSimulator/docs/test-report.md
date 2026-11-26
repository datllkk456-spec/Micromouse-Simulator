# Báo cáo kiểm thử

## Kiểm thử tự động

Kiểm thử `ApplicationLifecycle` xác nhận các hàm
`Application.initialize()`, `Application.run()` và
`Application.shutdown()` in đúng thông báo tương ứng.

Sau khi cấu hình và biên dịch dự án, chạy kiểm thử bằng lệnh:

```powershell
ctest --test-dir build --output-on-failure
```

## Danh sách kiểm tra theo đề bài

Môi trường hiện tại chưa có CMake hoặc trình biên dịch C++, vì vậy chưa thể
xác minh các bước cần biên dịch/chạy chương trình.

| Mã | Nội dung kiểm thử | Kết quả mong đợi | Trạng thái |
| --- | --- | --- | --- |
| TC01 | Cấu hình dự án bằng CMake | Cấu hình thành công | Chưa thực hiện: thiếu CMake |
| TC02 | Biên dịch dự án | Biên dịch thành công | Chưa thực hiện: thiếu CMake và trình biên dịch C++ |
| TC03 | Khởi chạy chương trình | Chương trình chạy và kết thúc thành công | Chưa thực hiện: chưa thể biên dịch |
| TC04 | Gọi `Application.initialize()` | In thông báo khởi tạo | Đã có kiểm thử tự động; chưa chạy |
| TC05 | Gọi `Application.run()` | In thông báo chương trình đang chạy | Đã có kiểm thử tự động; chưa chạy |
| TC06 | Gọi `Application.shutdown()` | In thông báo kết thúc | Đã có kiểm thử tự động; chưa chạy |
| TC07 | Kiểm tra nội dung Repository | Không đưa tệp build vào Git | Chờ thiết lập Git Repository |
| TC08 | Clone dự án và biên dịch lại | Clone sạch cấu hình và biên dịch thành công | Cần có Repository từ xa |
