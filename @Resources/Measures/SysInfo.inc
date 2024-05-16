[UserName]
 Measure = Plugin
 Plugin = SysInfo
 SysInfoType = USER_NAME

[OSName]
 Measure = Plugin
 Plugin = SysInfo
 SysInfoType = OS_VERSION  

[Idle]
 Measure = Plugin
 Plugin = SysInfo
 SysInfoType = IDLE_TIME

[Wifi.SSID]
 Measure = WiFiStatus
 WiFiInfoType = SSID
 Substitute = "-1":" Disconnected "

[Uptime]
 Measure = Uptime
 Format = %4!02i!:%3!02i!:%2!02i!:%1!02i!
 AddDaysToHours = 0

[CompName]
 Measure = Plugin
 Plugin = SysInfo
 SysInfoType = COMPUTER_NAME 

[HostName]
 Measure = Plugin
 Plugin = SysInfo
 SysInfoType = DNS_SERVER

[CPU.Usage]
 Measure= Cpu
 Processor= 1
 UpdateDivider= 100

[Temp.Measure]
 Measure=Plugin
 Plugin=CoreTemp
 CoreTempType=MaxTemperature  