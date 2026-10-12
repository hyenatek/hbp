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
            url: "https://github.com/hyenatek/hbp/releases/download/2.0.5-beta.2/hbp.xcframework.zip",
            checksum: "8a89572a4e93843a388ba8c65284644070e2df149bc43f16dc8bb07ed7a1bf44"
        )
    ]
)
