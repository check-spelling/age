/*
 * Copyright 2020 Bitnine Co., Ltd.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AG_CYPHER_ITEM_H
#define AG_CYPHER_ITEM_H

#include "postgres.h"

#include "nodes/nodes.h"
#include "nodes/pg_list.h"
#include "nodes/primnodes.h"
#include "parser/parse_node.h"

#include "parser/cypher_parse_node.h"

TargetEntry *transform_cypher_item(cypher_parsestate *cpstate, Node *node,
                                   Node *expr, ParseExprKind expr_kind,
                                   char *colname, bool resjunk);
List *transform_cypher_item_list(cypher_parsestate *cpstate, List *item_list,
                                 ParseExprKind expr_kind);

#endif
