// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRson",
    products: [
        .library(name: "TreeSitterRson", targets: ["TreeSitterRson"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterRson",
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
            name: "TreeSitterRsonTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterRson",
            ],
            path: "bindings/swift/TreeSitterRsonTests"
        )
    ],
    cLanguageStandard: .c11
)
