note
	description: "Summary description for {OPERATOR_GT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OPERATOR_GT
inherit
	EXPRESSION

feature -- Query
	output: STRING
	do
		Result := ">"
	end


end
