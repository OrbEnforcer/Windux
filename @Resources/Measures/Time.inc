[Time.12Hr]
 Measure = Time
 Format = %I %M 

[Time.24Hr]
 Measure = Time
 Format = %H %M

[Zone]
 Measure = Plugin
 Plugin = SysInfo
 SysInfoType = TIMEZONE_BIAS

[TimeZone]
 measure = Calc
 MeasureName = Zone
 dynamicVariables = 1
 formula = ([Zone]/60)
 substitute = "-1":"-01","-2":"-02","-3":"-03","-4":"-04","-5":"-05","-6":"-06","-7":"-07","-8":"-08","-9":"-09","+1":"+01","+2":"+02","+3":"+03","+4":"+04","+5":"+05","+6":"+06","+7":"+07","+8":"+08","+9":"+09"

 