
// @Todo: Move.



var lz = function(n)
{
	var str = "";
	if (n < 1000)
	{
		str = "0";
	}
	if (n < 100)
	{
		str = "00";
	}
	if (n < 10)
	{
		str = "000";
	}
	return str + n;
}

var c = "";

c += "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
c += "<CheatTable>\n";
c += "<CheatEntries>\n";

c += "<CheatEntry>\n";
c += "<Description>\"__CAMERA__\"</Description>\n";
c += "<GroupHeader>1</GroupHeader>\n";
c += "<CheatEntries>\n";

for (var index = 0; index < 500; index++)
{
	c += "<CheatEntry>\n";
	c += "<Description>\"" + lz(index) + "\"</Description>\n";
	c += "<VariableType>Float</VariableType>\n";
	c += "<Address>dmc3.exe+C8FBD0</Address>\n";
	c += "<Offsets>\n";
	c += "<Offset>" + (index * 4).toString(16).toUpperCase() + "</Offset>\n";
	c += "<Offset>498</Offset>\n";
	c += "</Offsets>\n";
	c += "</CheatEntry>\n";
}

c += "</CheatEntries>\n";
c += "</CheatEntry>\n";

c += "</CheatEntries>\n";
c += "</CheatTable>\n";

document.body.innerHTML = "<plaintext>" + c;
