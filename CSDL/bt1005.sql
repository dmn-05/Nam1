--1. Hiển danh sách tất cả các khách hàng gồm mã khách hàng, tên khách hàng, địa chỉ, điện thoại, và
--địa chỉ E-mail.
SELECT *
FROM KHACHHANG
--2. Hiển thị danh sách tất cả các vật tư gồm tên vật tư, giá mua, số lượng tồn
SELECT *
FROM VATTU
--3. Hiển danh sách các khách hàng có địa chỉ là “TÂN BÌNH” gồm mã khách hàng, tên khách hàng, địa
--chỉ, điện thoại, và địa chỉ E-mail.
SELECT  *
FROM KHACHHANG
WHERE DIACHI LIKE N'TÂN BÌNH'
--4. Hiển danh sách các khách hàng có địa chỉ là “BÌNH CHÁNH” gồm mã khách hàng, tên khách hàng,
--địa chỉ, điện thoại, và địa chỉ E-mail.
SELECT  *
FROM KHACHHANG
WHERE DIACHI LIKE N'BÌNH CHÁNH'
--5. Hiển thị danh sách vật tư có giá mua từ 15000 trở lên (hiển thị tất cả thông tin)
SELECT  *
FROM VATTU
WHERE GIAMUA >=15000
--6. Hiển thị tất cả thông tin trong danh sách vật tư có lượng tồn trên 50000
SELECT  *
FROM VATTU
WHERE SLTON >50000
--7. Hiển danh sách các khách hàng gồm các thông tin mã khách hàng, tên khách hàng, địa chỉ và địa
--chỉ E-mail của những khách hàng chưa có số điện thoại
SELECT  *
FROM KHACHHANG
WHERE DT IS NULL
--8. Hiển danh sách các khách hàng chưa có số điện thoại và cũng chưa có địa chỉ Email gồm mã khách
--hàng, tên khách hàng, địa chỉ.
SELECT  *
FROM KHACHHANG
WHERE EMAIL IS NULL
--9. Hiển danh sách các khách hàng đã có số điện thoại và địa chỉ E-mail gồm mã khách hàng, tên
--khách hàng, địa chỉ, điện thoại, và địa chỉ E-mail.
SELECT  *
FROM KHACHHANG
WHERE EMAIL IS NOT NULL AND DT IS NOT  NULL
--10. Hiển danh sách tất cả các vật tư gồm mã vật tư, tên vật tư, đơn vị tính và giá mua.
SELECT  *
FROM VATTU
--11. Hiển danh sách các vật tư có đơn vị tính là “CAI” gồm mã vật tư, tên vật tư và giá mua.\
SELECT  *
FROM VATTU
WHERE DVT LIKE N'CÁI'
--12. Hiển danh sách các vật tư gồm mã vật tư, tên vật tư, đơn vị tính và giá mua mà có giá mua trên
--25000.
SELECT  *
FROM VATTU
WHERE GIAMUA >25000
--13. Hiển danh sách các vật tư là “GẠCH” (bao gồm các loại gạch) gồm mã vật tư, tên vật tư, đơn vị tính
--và giá mua .
SELECT  *
FROM VATTU
WHERE TENVT LIKE N'GẠCH %'
--14. Hiển danh sách các vật tư gồm mã vật tư, tên vật tư, đơn vị tính và giá mua mà có giá mua nằm
--trong khoảng từ 20000 đến 40000.
SELECT  *
FROM VATTU
WHERE GIAMUA >=20000 AND GIAMUA<40000
--15. Tạo query để lấy ra các thông tin gồm Mã hoá đơn, ngày lập hoá đơn, tên khách hàng, địa chỉ khách
--hàng và số điện thoại.
 SELECT  MAHD,NGAY,KHACHHANG.MAKH,DIACHI,DT
FROM HOADON, KHACHHANG
WHERE HOADON.MAKH=KHACHHANG.MAKH
--16. Tạo query để lấy ra các thông tin gồm Mã hoá đơn, tên khách hàng, địa chỉ khách hàng và số điện
--thoại của ngày 25/5/2015.
SELECT MAHD,NGAY,KH.MAKH,DIACHI,DT
FROM HOADON AS HD,KHACHHANG AS KH
WHERE NGAY = '2015-05-25' AND HD.MAKH=KH.MAKH
--17. Tạo query để lấy ra các thông tin gồm Mã hoá đơn, ngày lập hoá đơn, tên khách hàng, địa chỉ khách
--hàng và số điện thoại của những hoá đơn trong tháng 6/2015.
SELECT MAHD,NGAY,KH.MAKH,DIACHI,DT
FROM HOADON AS HD,KHACHHANG AS KH
WHERE MONTH(NGAY) = '06' AND YEAR(NGAY)='2015' AND HD.MAKH=KH.MAKH
--18. Tạo query để lấy ra các thông tin gồm Mã hoá đơn, ngày lập hoá đơn, tên khách hàng, địa chỉ khách
--hàng và số điện thoại.
SELECT MAHD,NGAY,KH.MAKH,KH.TENKH,DIACHI,DT
FROM HOADON AS HD,KHACHHANG AS KH
WHERE HD.MAKH=KH.MAKH
--19. Lấy ra danh sách những khách hàng (tên khách hàng, địa chỉ, số điện thoại) đã mua hàng trong
--tháng 6/2015.
SELECT KH.MAKH, DIACHI,DT
FROM HOADON AS HD,KHACHHANG AS KH
WHERE MONTH(NGAY) = '06' AND YEAR(NGAY)='2015' AND HD.MAKH=KH.MAKH
--20. Lấy ra danh sách những khách hàng không mua hàng trong tháng 6/2015 gồm các thông tin tên
--khách hàng, địa chỉ, số điện thoại.
SELECT KH.MAKH, DIACHI,DT
FROM HOADON AS HD,KHACHHANG AS KH
WHERE MONTH(NGAY) !=06 AND YEAR(NGAY)='2015' AND HD.MAKH=KH.MAKH
--21. Tạo query để lấy ra các thông tin gồm các thông tin mã hóa đơn, ,mã vật tư, tên vật tư, đơn vị tính,
--giá bán, giá mua, số lượng , trị giá mua (giá mua * số lượng), trị giá bán , ( giá bán * số lượng).
SELECT * ,GIAMUA*SL AS TRIGIAMUA,GIABAN*SL AS TRIGIABAN
FROM VATTU AS VT,CHITIETHOADON AS CTHD
WHERE VT.MAVT=CTHD.MAVT
--22. Tạo query để lấy ra các chi tiết hoá đơn gồm các thông tin mã hóa đơn, ,mã vật tư, tên vật tư, đơn
--vị tính, giá bán, giá mua, số lượng , trị giá mua (giá mua * số lượng), trị giá bán , ( giá bán * số
--lượng) mà có giá bán lớn hơn hoặc bằng giá mua.
SELECT * ,GIAMUA*SL AS TRIGIAMUA,GIABAN*SL AS TRIGIABAN
FROM VATTU AS VT,CHITIETHOADON AS CTHD
WHERE VT.MAVT=CTHD.MAVT AND GIABAN>=GIAMUA
--23. Tạo query để lấy ra các thông tin gồm mã hóa đơn, ,mã vật tư, tên vật tư, đơn vị tính, giá bán, giá
--mua, số lượng , trị giá mua (giá mua * số lượng), trị giá bán , ( giá bán * số lượng) và cột khuyến
--mãi với khuyến mãi 10% cho những mặt hàng bán trong một hóa đơn lơn hơn 100.
SELECT MAHD,CTHD.MAVT, TENVT,DVT, GIABAN, GIAMUA, SUM(SL) AS SL ,GIAMUA*SL AS TRIGIAMUA,GIABAN*SL AS TRIGIABAN
FROM VATTU AS VT,CHITIETHOADON AS CTHD
WHERE VT.MAVT=CTHD.MAVT
GROUP BY MAHD,CTHD.MAVT,TENVT,DVT,GIAMUA,GIABAN,SL
--24. Tìm ra những mặt hàng chưa bán được.
--SELECT
--FROM 
--WHERE
--25. Tạo bảng tổng hợp gồm các thông tin: mã hóa đơn, ngày hoá đơn, tên khách hàng, địa chỉ, số điện
--thoại, tên vật tư, đơn vị tính, giá mua, giá bán, số lượng, trị giá mua, trị giá bán.
--26. Tạo bảng tổng hợp của tháng 5/2015 gồm các thông tin: mã hóa đơn, ngày hoá đơn, tên khách
--hàng, địa chỉ, số điện thoại, tên vật tư, đơn vị tính, giá mua, giá bán, số lượng, trị giá mua, trị giá
--bán.
--27. Tạo bảng tổng hợp của tháng 6/2015 gồm các thông tin: mã hóa đơn, ngày hoá đơn, tên khách
--hàng, địa chỉ, số điện thoại, tên vật tư, đơn vị tính, giá mua, giá bán, số lượng, trị giá mua, trị giá
--bán.
--28. Tạo bảng tổng hợp của quý 1 năm 2015 gồm các thông tin: mã hóa đơn, ngày hoá đơn, tên khách
--hàng, địa chỉ, số điện thoại, tên vật tư, đơn vị tính, giá mua, giá bán, số lượng, trị giá mua, trị giá
--bán.
--29. Lấy ra danh sách các hoá đơn gồm các thông tin: Số hoá đơn, ngày, tên khách hàng, địa chỉ khách
--hàng, tổng trị giá của hoá đơn.
--30. Lấy ra hoá đơn có tổng trị giá lớn nhất gồm các thông tin: Số hoá đơn, ngày, tên khách hàng, địa
--chỉ khách hàng, tổng trị giá của hoá đơn.
--31. Lấy ra hoá đơn có tổng trị giá lớn nhất trong tháng 5/2015 gồm các thông tin: Số hoá đơn, ngày,
--tên khách hàng, địa chỉ khách hàng, tổng trị giá của hoá đơn.
--32. Lấy ra hoá đơn có tổng trị giá nhỏ nhất gồm các thông tin: Số hoá đơn, ngày, tên khách hàng, địa
--chỉ khách hàng, tổng trị giá của hoá đơn.
--33. Đếm xem mỗi khách hàng có bao nhiêu hoá đơn.
--34. Lấy ra các thông tin của khách hàng có số lượng hoá đơn mua hàng nhiều nhất.
--35. Lấy ra các thông tin của khách hàng có số lượng hàng mua nhiều nhất.
--36. Lấy ra các thông tin về các mặt hàng mà được bán trong nhiều hoá đơn nhất.
--37. Lấy ra các thông tin về các mặt hàng mà được bán nhiều nhất.
--38. Lấy ra danh sách tất cả các khách hàng gồm Mã khách hàng, tên khách hàng, địa chỉ , số lượng hoá
--đơn đã mua (nếu khách hàng đó chưa mua hàng thì cột số lượng hoá đơn để trống)