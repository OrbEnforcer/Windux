[Charging]
 Measure = Plugin
 Plugin = PowerPlugin
 PowerState = ACLine
 IfCondition = Charging = 0
 IfTrueAction =  [!SetOption Battery.IMG ImageName "#@#Images/Battery0.png"] 
 IfCondition2 = Charging = 1
 IfTrueAction2 = [!SetOption Battery.IMG ImageName "#@#Images/BatteryCharging.png"]

[Battery.Measure]
 Measure=Plugin
 Plugin=PowerPlugin
 PowerState=Percent
 IfCondition = Battery.Measure = 0
 IfTrueAction = [!SetOption Battery.IMG ImageName "#@#Images/Battery0.png"]
 IfCondition2 = (Battery.Measure >= 10) && (Battery.Measure < 20) 
 IfTrueAction2 = [!SetOption Battery.IMG ImageName "#@#Images/Battery10.png"]
 IfCondition3 = (Battery.Measure >= 20) && (Battery.Measure < 30)
 IfTrueAction3 = [!SetOption Battery.IMG ImageName "#@#Images/Battery20.png"]
 IfCondition4 = (Battery.Measure >= 30) && (Battery.Measure < 40)
 IfTrueAction4 = [!SetOption Battery.IMG ImageName "#@#Images/Battery30.png"] 
 IfCondition5 = (Battery.Measure >= 40) && (Battery.Measure < 50)
 IfTrueAction5 =  [!SetOption Battery.IMG ImageName "#@#Images/Battery40.png"]
 IfCondition6 = (Battery.Measure >= 50) && (Battery.Measure < 60)
 IfTrueAction6 =  [!SetOption Battery.IMG ImageName "#@#Images/Battery50.png"]
 IfCondition7 = (Battery.Measure >= 60) && (Battery.Measure < 70)
 IfTrueAction7 =  [!SetOption Battery.IMG ImageName "#@#Images/Battery60.png"]
 IfCondition8 = (Battery.Measure >= 70) && (Battery.Measure < 80)
 IfTrueAction8 =  [!SetOption Battery.IMG ImageName "#@#Images/Battery70.png"]
 IfCondition9 = (Battery.Measure >= 80) && (Battery.Measure < 90)
 IfTrueAction9 =  [!SetOption Battery.IMG ImageName "#@#Images/Battery80.png"]
 IfCondition10 = (Battery.Measure >= 90) && (Battery.Measure < 100)
 IfTrueAction10 =  [!SetOption Battery.IMG ImageName "#@#Images/Battery90.png"]
 IfCondition11 = Battery.Measure = 100
 IfTrueAction11 = [!SetOption Battery.IMG ImageName "#@#Images/Battery100.png"]

[Volume.Measure]
 Measure = Plugin
 Plugin = Win7AudioPlugin
 UpdateDivider = 0.0005

[Vol.Measure]
 Measure = Calc
 Formula = Volume.Measure
 MinValue = 0
 MaxValue = 100
 RegExpSubstitute=1
 Substitute = "-1":"0"
 IfCondition = Volume.Measure = -1
 IfCondition2 = Volume.Measure = 0
 IfTrueAction = [!SetOption Volume.IMG ImageName "#@#Images/Mute.png"]
 IfFalseAction = [!SetOption Volume.IMG ImageName "#@#Images/Volume2.png"]
 IfTrueAction2 = [!SetOption Volume.IMG ImageName "#@#Images/Mute.png"]
 IfFalseAction2 = [!SetOption Volume.IMG ImageName "#@#Images/Volume2.png"]
 UpdateDivider = 0.0005
 
[Language]
 Measure = Plugin
 Plugin = PowerShellRM
 Line = Add-Type -AssemblyName System.Windows.Forms; [System.Windows.Forms.InputLanguage]::CurrentInputLanguage.Culture.DisplayName

[WiFi]
 Measure=WiFiStatus
 WiFiInfoType=Quality
 IfCondition = WiFi = 0
 IfTrueAction = [!SetOption WiFi.IMG ImageName "#@#Images/WifiOff.png"]
 IfCondition2 = WiFi >= 25 
 IfTrueAction2 = [!SetOption WiFi.IMG ImageName "#@#Images/Wifi25.png"]
 IfCondition3 = WiFi >= 50
 IfTrueAction3 = [!SetOption WiFi.IMG ImageName "#@#Images/Wifi50.png"]
 IfCondition4 = WiFi >= 75
 IfTrueAction4 = [!SetOption WiFi.IMG ImageName "#@#Images/Wifi75.png"] 
 IfCondition5 = WiFi >= 90
 IfTrueAction5 =  [!SetOption WiFi.IMG ImageName "#@#Images/Wifi100.png"]

[Active.Measure]
 Measure = Plugin
 Plugin = GetActiveTitle
 ;IfCondition = Active.Measure = 0
 ;IfTrueAction = [!SetOption Bands Hidden "0" ]
 ;IfFalseAction = [!SetOption Bands Hidden "1"]
 Substitute = "#ROOTCONFIGPATH#" : "" , "" : "Desktop" , "Program Manager" : "Desktop"

[Backlight]
 Measure = Plugin
 Plugin = PowershellRM
 Line  = (Get-Ciminstance -Namespace root/WMI -ClassName WmiMonitorBrightness).CurrentBrightness
 MaxValue = 100