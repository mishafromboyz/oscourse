![Alt text](https://g.gravizo.com/svg?
 digraph G {
	start -> "first symbol is _ or [A-z]?";
	"first symbol is _ or [A-z]?" -> "no matches" [label="no"];
	"first symbol is _ or [A-z]?" -> "next symbol" [label="yes"];
	"next symbol" -> "eof?";
	"eof?" -> "match" [label="yes"];
	"eof?" -> "word character?" [label = "no"];
	"word character?" -> "no matches" [label = "no"];
	"word character?" -> "next symbol" [label = "yes"];
 }
)
