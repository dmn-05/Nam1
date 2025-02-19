--10. Với mỗi phòng ban, cho biết tên phòng ban và địa điểm phòng
SELECT TENPHG,DIADIEM
FROM PHONGBAN, DIADIEM_PHG
WHERE DIADIEM_PHG.MAPHG=PHONGBAN.MAPHG
--11. Tìm tên những người trưởng phòng của từng phòng ban
SELECT TENNV,TENPHG
FROM NHANVIEN, PHONGBAN
WHERE TRPHG=MANV
--12. Tìm tên và địa chỉ của tất cả các nhân viên của phòng "Nghiên cứu".
SELECT TENNV, DCHI
FROM NHANVIEN, PHONGBAN
WHERE MAPHG=PHG AND TENPHG LIKE N'Nghiên cứu'
--13. Với mỗi đề án ở Hà Nội, cho biết tên đề án, tên phòng ban, họ tên và
--ngày nhận chức của trưởng phòng của phòng ban chủ trì đề án đó.
SELECT TENDA, TENPHG, HONV,TENLOT,TENNV,NG_NHANCHUC
FROM DEAN, PHONGBAN, NHANVIEN
WHERE PHONG=MAPHG AND MANV=TRPHG AND DDIEM_DA LIKE N'Hà Nội'
--14. Tìm tên những nữ nhân viên và tên người thân của họ
SELECT TENNV,TENTN
FROM NHANVIEN,THANNHAN
WHERE MA_NVIEN=MANV AND NHANVIEN.PHAI LIKE N'Nữ'
--15. Với mỗi nhân viên, cho biết họ tên nhân viên và họ tên người quản lý
--trực tiếp của nhân viên đó
SELECT NV.HONV,NV.TENLOT,NV.TENNV,QL.HONV,QL.TENLOT,QL.TENNV
FROM NHANVIEN AS QL,NHANVIEN AS NV
WHERE NV.MA_NQL = QL.MANV
--16. Với mỗi nhân viên, cho biết họ tên của nhân viên đó, họ tên người
--trưởng phòng và họ tên người quản lý trực tiếp của nhân viên đó.
SELECT NV.HONV,NV.TENLOT,NV.TENNV,TP.HONV,TP.TENLOT,TP.TENNV,QL.HONV,QL.TENLOT,QL.TENNV
FROM NHANVIEN AS QL,NHANVIEN AS NV, PHONGBAN,NHANVIEN AS TP
WHERE NV.MA_NQL = QL.MANV AND TRPHG=TP.MANV
--17. Tên những nhân viên phòng số 5 có tham gia vào đề án "Sản phẩm X"
--và nhân viên này do "Nguyễn Thanh Tùng" quản lý trực tiếp.
--18. Cho biết tên các đề án mà nhân viên Đinh Bá Tiến đã tham gia.