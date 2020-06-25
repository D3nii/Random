import sys, stripe

rest = chilkat.CkRest()

#  URL: https://api.stripe.com/v1/balance/history/txn_1BnETJGswQrCoh0XxO2tGYr7
bTls = True
port = 443
bAutoReconnect = True
success = rest.Connect("api.stripe.com",port,bTls,bAutoReconnect)
if (success != True):
    print("ConnectFailReason: " + str(rest.get_ConnectFailReason()))
    print(rest.lastErrorText())
    sys.exit()

rest.SetAuthBasic("sk_test_hPgsAGvTcxf0GnsLB7iJAH5F007f0C28EZ","")

sbResponseBody = chilkat.CkStringBuilder()
success = rest.FullRequestNoBodySb("GET","/v1/balance/history/txn_1BnETJGswQrCoh0XxO2tGYr7",sbResponseBody)
if (success != True):
    print(rest.lastErrorText())
    sys.exit()

jsonResponse = chilkat.CkJsonObject()
jsonResponse.LoadSb(sbResponseBody)

id = jsonResponse.stringOf("id")
object = jsonResponse.stringOf("object")
amount = jsonResponse.IntOf("amount")
available_on = jsonResponse.IntOf("available_on")
created = jsonResponse.IntOf("created")
currency = jsonResponse.stringOf("currency")
description = jsonResponse.IsNullOf("description")
exchange_rate = jsonResponse.IsNullOf("exchange_rate")
fee = jsonResponse.IntOf("fee")
net = jsonResponse.IntOf("net")
source = jsonResponse.stringOf("source")
status = jsonResponse.stringOf("status")
type = jsonResponse.stringOf("type")
i = 0
count_i = jsonResponse.SizeOfArray("fee_details")
while i < count_i :
    jsonResponse.put_I(i)
    i = i + 1
