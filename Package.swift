// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "hbp",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "hbp", targets: ["hbp"])
    ],
    targets: [
        .binaryTarget(
            name: "hbp",
            url: "https://github.com/hyenatek/hbp/releases/download/2.0.5-beta.1/hbp.xcframework.zip",
            checksum: "74cbd9946f4cd9b25b29c5822a0e04dbff8aa5e0de60031f1a99ac8930d8d230"
        )
    ]
)
