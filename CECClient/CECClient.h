## @file
#  An HDMI-CEC client for use with Pulse-Eight
#  
#  Detailed Description of UEFI MyWizardDriver
#
#  (c) 2018 Mauro Colella
#  
#  To be used under the terms of the MIT License
#  
##

[Defines]
  INF_VERSION                    = 1.25
  BASE_NAME                      = CECClient
  FILE_GUID                      = 789bc075-40b7-4076-b59f-0e6f10f687f1
  MODULE_TYPE                    = UEFI_APPLICATION
  VERSION_STRING                 = 1.0
  ENTRY_POINT                    = UefiMain
#
# The following information is for reference only and not required by the build tools.
#
#  VALID_ARCHITECTURES           = X64
#

[Sources]
  CECClient.c

[Packages]
  MdePkg/MdePkg.dec
  
[LibraryClasses]
  UefiApplicationEntryPoint
  UefiLib
  
[Guids]

[Ppis]

[Protocols]

[FeaturePcd]

[Pcd]
