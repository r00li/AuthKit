AuthKit
=======

AuthKit is to authentication as to what **ARAnalytics** is to all analytics providers. AuthKit allows logging in into multiple online services and provides configured AFNetworking clients which you can use to access the API directly.

Since AFNetworking 1.x and 2.x are incompatible, many existing wrapper libraries cannot be used with 2.x version. AuthKit fills this gap of providing AFHTTPNetworkOperationManager classes configured to be used with any API.

# Features

- Easily login to the next services:
  - Crashlytics
  - GitHub
  - ...
- Get logined user details for each service
- A prebuilt view controller that handles all logging in for you

# Contribution

Anyone can easily add their own service by creating AKClient subclass and implementing the abstract methods.

Contact
======

Dal Rupnik

- [legoless](https://github.com/legoless) on **GitHub**
- [@thelegoless](https://twitter.com/thelegoless) on **Twitter**
- [legoless@arvystate.net](mailto:legoless@arvystate.net)

License
======

AuthKit is available under the MIT license. See [LICENSE](https://github.com/Legoless/AuthKit/blob/master/LICENSE) file for more information.
