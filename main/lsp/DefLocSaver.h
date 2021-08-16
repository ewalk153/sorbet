#include "ast/ast.h"
#include "common/common.h"
#include "core/core.h"

namespace sorbet::realmain::lsp {

class DefLocSaver {
public:
    // Handles loc and symbol requests for method definitions.
    ast::ExpressionPtr postTransformMethodDef(core::Context ctx, ast::ExpressionPtr methodDef);
    // Handles loc and symbol requests for instance variables.
    ast::ExpressionPtr postTransformUnresolvedIdent(core::Context ctx, ast::ExpressionPtr id);

    // Handles loc and symbol requests for constants.
    ast::ExpressionPtr postTransformConstantLit(core::Context ctx, ast::ExpressionPtr lit);
};
}; // namespace sorbet::realmain::lsp
