# PartnerMobileOrderDemo

# API 文件
http://petstore.swagger.io/?url=https://s3-ap-northeast-1.amazonaws.com/qlieer-file-storage/swagger.yaml

# 請打開相機權限描述
Info.plist 的 NSCameraDescriptionUsage 請記得填寫，用途是掃描 QRCode 取餐時會開啟

# Objective-C 專案
請記得到 Target > Build Setting > Always Embed Swift Standard Libraries 勾選為 YES

# 必要的Frameworks
可以至 https://www.dropbox.com/s/ai98aic6i7ycgwl/QLiEER_SDK_Required_Frameworks.zip?dl=0 下載已經 build 好的版本。
或是自行用 Carthage 安裝，以下為有用到的第三方：

```
github "Alamofire/Alamofire" ~> 4.5
github "pkluz/PKHUD"
github "ashleymills/Reachability.swift"
github "realm/realm-cocoa"  ~> 5.5.0
github "SwiftyJSON/SwiftyJSON"
github "Square/Valet"  ~> 3.2.8 
github "tristanhimmelman/ObjectMapper" ~> 3.4 
github "tristanhimmelman/AlamofireObjectMapper" ~> 5.2.1
github "marmelroy/PhoneNumberKit"
```

# 請 Embed Frameworks 
這是動態 Framework，無需添加 -objc 等參數。但請到 Targets > General > Embedded Binaries 添加本 SDK 及關聯的第三方函式庫

# 請確認 Search Library Path 正確
請檢查放置本 SDK 及關聯第三方的路徑正確。於 Targets > Build Setting > Framework Search Paths 檢查
