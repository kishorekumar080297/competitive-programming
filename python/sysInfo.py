import wmi

c = wmi.WMI()    
systeminfo = c.Win32_ComputerSystem()[0]

Manufacturer = systeminfo.Manufacturer
Model = systeminfo.Model
