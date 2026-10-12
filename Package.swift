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
            url: "https://github.com/hyenatek/hbp/releases/download/2.0.5/hbp.xcframework.zip",
            checksum: "f476b609a4ae80bbe72b59dd11e88ecf131647004764608fdf578c3817de52d9"
        )
    ]
)
