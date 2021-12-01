- Thay đổi cách đăng ký và huỷ đăng ký lệnh slash vào server. Cách sử dụng:
```
+ Đăng ký vào server: node register [ID server]
+ Đăng ký toàn cầu: node register
+ Huỷ đăng ký vào server: node unregister [ID server]
+ Huỷ đăng ký toàn cầu: node unregister
```

- Đã thêm số lượng trạng thái `online, idle, dnd, offline` của thành viên vào `/serverinfo`.
- Đã sửa lại cách hoạt động của `/clear` để cho nó hoạt động đúng theo yêu cầu.
- Đối với `/purge` thì vẫn chưa thể hoạt động theo yêu cầu, tức là bạn sẽ phải sử dụng lệnh thêm vài lần để xoá triệt để nhưng hãy nhớ rằng tin nhắn quá 14 ngày tuổi không thể xoá được.
- Đã cập nhật DiscordJS lên phiên bản hiện tại (Version: 13.3.1)
