// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRSF",
    products: [
        .library(name: "TreeSitterRSF", targets: ["TreeSitterRSF"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterRSF",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterRSFTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterRSF",
            ],
            path: "bindings/swift/TreeSitterRSFTests"
        )
    ],
    cLanguageStandard: .c11
)
