- Thêm 1 lệnh slash mới: **/purge**. Cách sử dụng:
```
/purge user:@Thành_viên_cần_xoá_tin_nhắn number:Số_tin_nhắn_cần_xoá_[2-100]
Lưu ý rằng 2 giá trị trên bắt buộc phải điền vào thì lệnh mới có thể chạy.
```

- Lệnh Slash **/ban** đã thêm giá trị `deletelastmessage`. Giá trị này không bắt buộc, mặc định của nó sẽ là `24h`. Các lựa chọn của giá trị bao gồm:
```
Giữ lại = 0 -> Sẽ không xoá tin nhắn sau khi thành viên bị ban
Xoá toàn bộ tin nhắn từ 24 giờ trước = 1 -> Sẽ xoá toàn bộ tin nhắn từ thành viên trong 24 giờ trước
Xoá toàn bộ tin nhắn từ 7 ngày trước = 7 -> Sẽ xoá toàn bộ tin nhắn từ thành viên trong 7 ngày trước
```

- Thêm loại hoạt động mới cho slash `/activitystart`. Hoạt động bao gồm:
```
Putt Party
```
