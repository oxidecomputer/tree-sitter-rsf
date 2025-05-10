import XCTest
import SwiftTreeSitter
import TreeSitterRSF

final class TreeSitterRSFTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rsf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading RSF grammar")
    }
}
