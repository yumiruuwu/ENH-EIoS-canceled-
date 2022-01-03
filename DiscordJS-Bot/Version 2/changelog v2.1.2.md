- Cập nhật module **discord.js** lên phiên bản mới nhất [13.5.0].
- Thay đổi tất cả các giá trị của `.setAuthor()` và `.setFooter()` theo [changelog mới nhất](https://github.com/discordjs/discord.js/releases/tag/13.5.0) của **discord.js**.
- Đã thêm 2 slash mới: `/timeout` và `/removetimeout`. Bên cạnh đó cũng ngưng hỗ trợ đối với 3 slash `/mute`, `/unmute` và `/help`. Cách dùng của 2 loại slash mới:
    
    **Timeout**
    ```
    /timeout user:thành_viên week:số_tuần day:số_ngày hour:số_giờ minute:số_phút reason:lý_do
    
    Trong đó, các giá trị week, day, hour, minute, reason không bắt buộc phải điền, để trống các giá trị sẽ sử dụng mặc định theo bot.
    ```
    
    **Remove Timeout**
    ```
    /removetimeout user:thành_viên reason:lý_do
    
    Giá trị reason không bắt buộc.
    ```
