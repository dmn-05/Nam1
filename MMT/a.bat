net user KT1 Pass@kt /add
net user KT2 Pass@kt /add
net user KT3 Pass@kt /add

net user KD1 Pass@kd /add
net user KD2 Pass@kd /add
net user KD3 Pass@kd /add

net user NS1 Pass@ns /add
net user NS2 Pass@ns /add
net user NS3 Pass@ns /add

net localgroup NHOMNHANSU /add
net localgroup NHOMKETOAN /add
net localgroup NHOMKINHDOANH /add

net localgroup NHOMNHANSU NS1 /add
net localgroup NHOMNHANSU NS2 /add
net localgroup NHOMNHANSU NS3 /add
net localgroup NHOMKETOAN KT1 /add
net localgroup NHOMKETOAN KT2 /add
net localgroup NHOMKETOAN KT3 /add
net localgroup NHOMKINHDOANH KD1 /add
net localgroup NHOMKINHDOANH KD2 /add
net localgroup NHOMKINHDOANH KD3 /add