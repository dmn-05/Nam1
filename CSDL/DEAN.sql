--19. Cho biết số lượng đề án của công ty
SELECT COUNT(*)
FROM DEAN

--20. Cho biết số lượng đề án do phòng 'Nghiên Cứu' chủ trì
SELECT COUNT(*)
FROM DEAN AS DA, PHONGBAN AS PB
WHERE DA.PHONG = PB.MAPHG AND TENPHG LIKE N'Nghiên Cứu'

--21. Cho biết lương trung bình của các nữ nhân viên
SELECT AVG(NV.LUONG)
FROM NHANVIEN AS NV
WHERE NV.PHAI = N'NỮ'

--22. Cho biết số thân nhân của nhân viên 'Đinh Bá Tiến'
SELECT COUNT(NV.MANV)
FROM NHANVIEN AS NV, THANNHAN AS TN
WHERE NV.TENNV = N'Đinh Bá Tiên' 

--23. Với mỗi đề án, liệt kê tên đề án và tổng số giờ làm việc một tuần của
--tất cả các nhân viên tham dự đề án đó.
--24. Với mỗi đề án, cho biết có bao nhiêu nhân viên tham gia đề án đó
--25. Với mỗi nhân viên, cho biết họ và tên nhân viên và số lượng thân nhân
--của nhân viên đó.
--26. Với mỗi nhân viên, cho biết họ tên của nhân viên và số lượng đề án mà
--nhân viên đó đã tham gia.
--27. Với mỗi nhân viên, cho biết số lượng nhân viên mà nhân viên đó quản
--lý trực tiếp.
--28. Với mỗi phòng ban, liệt kê tên phòng ban và lương trung bình của
--những nhân viên làm việc cho phòng ban đó.
--29. Với các phòng ban có mức lương trung bình trên 30,000, liệt kê tên
--phòng ban và số lượng nhân viên của phòng ban đó.
--30. Với mỗi phòng ban, cho biết tên phòng ban và số lượng đề án mà
--phòng ban đó chủ trì
--31. Với mỗi phòng ban, cho biết tên phòng ban, họ tên người trưởng
--phòng và số lượng đề án mà phòng ban đó chủ trì
--32. Với mỗi phòng ban có mức lương trung bình lớn hơn 40,000, cho biết
--tên phòng ban và số lượng đề án mà phòng ban đó chủ trì.
--33. Cho biết số đề án diễn ra tại từng địa điểm
--34. Với mỗi đề án, cho biết tên đề án và số lượng công việc của đề án
--này.35. Với mỗi công việc trong đề án có mã đề án là 30, cho biết số lượng
--nhân viên được phân công .
--36. Với mỗi công việc trong đề án có mã đề án là 'Dao Tao', cho biết số
--lượng nhân viên được phân công.