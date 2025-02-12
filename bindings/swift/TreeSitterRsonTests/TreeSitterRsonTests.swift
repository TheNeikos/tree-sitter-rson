import XCTest
import SwiftTreeSitter
import TreeSitterRson

final class TreeSitterRsonTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rson())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Rson grammar")
    }
}
