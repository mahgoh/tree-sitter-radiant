import XCTest
import SwiftTreeSitter
import TreeSitterRadiant

final class TreeSitterRadiantTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_radiant())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Radiant grammar")
    }
}
