--19. Cho biết số lượng đề án của công ty
SELECT COUNT(*) AS N'SO LUONG DE AN'
FROM DEAN
--20. Cho biết số lượng đề án do phòng 'Nghiên Cứu' chủ trì
SELECT COUNT(*) AS N'SO LUONG DE AN'
FROM PHONGBAN,DEAN
WHERE PHONG=MAPHG AND TENPHG LIKE N'NGHIÊN CỨU'
--21. Cho biết lương trung bình của các nữ nhân viên
SELECT AVG(LUONG)
FROM NHANVIEN
WHERE PHAI LIKE N'NỮ'
--22. Cho biết số thân nhân của nhân viên 'Đinh Bá Tiến'
SELECT COUNT(*) AS N'SO THAN NHAN'
FROM NHANVIEN,THANNHAN
WHERE MANV=MA_NVIEN AND HONV+' '+TENLOT+' '+TENNV LIKE N'ĐINH BÁ TIÊN'
--23. Với mỗi đề án, liệt kê tên đề án và tổng số giờ làm việc một tuần của
--tất cả các nhân viên tham dự đề án đó.
SELECT TENDA, SUM(THOIGIAN) AS N'TONG THOI GIAN'
FROM PHANCONG, DEAN
WHERE PHANCONG.MADA=DEAN.MADA
GROUP BY TENDA
--24. Với mỗi đề án, cho biết có bao nhiêu nhân viên tham gia đề án đó
SELECT TENDA, COUNT(MA_NVIEN) AS N'TONG NHAN VIEN'
FROM DEAN, PHANCONG
WHERE PHANCONG.MADA=DEAN.MADA
GROUP BY TENDA
--25. Với mỗi nhân viên, cho biết họ và tên nhân viên và số lượng thân nhân
--của nhân viên đó.
SELECT HONV+' '+TENLOT+' '+TENNV AS N'HOTEN', COUNT(*) AS N'SO LUONG THAN NHAN'
FROM NHANVIEN,THANNHAN
WHERE MANV=MA_NVIEN
GROUP BY HONV+' '+TENLOT+' '+TENNV
--26. Với mỗi nhân viên, cho biết họ tên của nhân viên và số lượng đề án mà
--nhân viên đó đã tham gia.
SELECT HONV+' '+TENLOT+' '+TENNV AS N'HOTEN', COUNT(MADA) AS N'SO LUONG DE AN'
FROM NHANVIEN,PHANCONG
WHERE MANV=MA_NVIEN
GROUP BY HONV+' '+TENLOT+' '+TENNV
--27. Với mỗi nhân viên, cho biết số lượng nhân viên mà nhân viên đó quản
--lý trực tiếp.
SELECT QL.HONV+' '+QL.TENLOT+' '+QL.TENNV AS N'NGUOI QUAN LY' ,COUNT(NV.MANV)AS N'SO LUONG NV QL'
FROM NHANVIEN AS NV, NHANVIEN AS QL
WHERE NV.MA_NQL=QL.MANV
GROUP BY QL.HONV+' '+QL.TENLOT+' '+QL.TENNV
--28. Với mỗi phòng ban, liệt kê tên phòng ban và lương trung bình của
--những nhân viên làm việc cho phòng ban đó.
SELECT TENPHG, AVG(LUONG)AS N'LUONG TRUNG BINH'
FROM PHONGBAN, NHANVIEN
WHERE PHG=MAPHG
GROUP BY TENPHG
--29. Với các phòng ban có mức lương trung bình trên 30,000, liệt kê tên
--phòng ban và số lượng nhân viên của phòng ban đó.
SELECT TENPHG, COUNT(*)AS N'SO LUONG NHAN VIEN'
FROM PHONGBAN, NHANVIEN
WHERE PHG=MAPHG
GROUP BY TENPHG
HAVING AVG(LUONG)>30000
--30. Với mỗi phòng ban, cho biết tên phòng ban và số lượng đề án mà
--phòng ban đó chủ trì
SELECT TENPHG, COUNT(MADA)AS N'SO LUONG DE AN'
FROM PHONGBAN, DEAN
WHERE PHONG=MAPHG
GROUP BY TENPHG
--31. Với mỗi phòng ban, cho biết tên phòng ban, họ tên người trưởng
--phòng và số lượng đề án mà phòng ban đó chủ trì
SELECT TENPHG,HONV+' '+TENLOT+' '+TENNV AS N'HOTEN',COUNT(MADA) AS N'SO LUONG DE AN'
FROM PHONGBAN,NHANVIEN,DEAN
WHERE TRPHG=MANV AND PHONG=MAPHG
GROUP BY TENPHG, TENPHG,HONV+' '+TENLOT+' '+TENNV
--32. Với mỗi phòng ban có mức lương trung bình lớn hơn 40,000, cho biết
--tên phòng ban và số lượng đề án mà phòng ban đó chủ trì.
SELECT TENPHG, COUNT(MADA)AS N'SO LUONG DE AN'
FROM PHONGBAN, DEAN, NHANVIEN
WHERE PHONG=MAPHG AND PHG=MAPHG
GROUP BY TENPHG
HAVING AVG(LUONG)>40000
--33. Cho biết số đề án diễn ra tại từng địa điểm

--34. Với mỗi đề án, cho biết tên đề án và số lượng công việc của đề án
--này.
SELECT DA.TENDA,COUNT(CV.TEN_CONG_VIEC) AS 'SO LUONG CV'
FROM CONGVIEC AS CV, DEAN AS DA
WHERE CV.MADA=DA.MADA
GROUP BY CV.MADA,DA.TENDA
--35. Với mỗi công việc trong đề án có mã đề án là 30, cho biết số lượng
--nhân viên được phân công .
SELECT CV.STT,CV.MADA,CV.TEN_CONG_VIEC,COUNT(PC.MA_NVIEN) AS "SO LUONG NV"
FROM PHANCONG AS PC,CONGVIEC AS CV
WHERE PC.STT=CV.STT AND PC.MADA=CV.MADA AND PC.MADA LIKE 30
GROUP BY CV.STT,CV.MADA,CV.TEN_CONG_VIEC
--36. Với mỗi công việc trong đề án có mã đề án là 'Dao Tao', cho biết số
--lượng nhân viên được phân công.
SELECT CV.STT,CV.MADA,CV.TEN_CONG_VIEC,COUNT(PC.MA_NVIEN) AS "SO LUONG NV"
FROM PHANCONG AS PC,CONGVIEC AS CV
WHERE PC.STT=CV.STT AND PC.MADA=CV.MADA AND CV.TEN_CONG_VIEC LIKE N'ĐÀO TẠO %'
GROUP BY CV.STT,CV.MADA,CV.TEN_CONG_VIEC