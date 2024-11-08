class HistorySection
{
	constructor(page)
	{
		this.page = page;
		this.CivHistoryHeading = Engine.GetGUIObjectByName('civHistoryHeading');
		this.CivHistoryText = Engine.GetGUIObjectByName('civHistoryText');
	}

	update(civInfo)
	{
		if (!civInfo.History)
		{
			this.CivHistoryHeading.caption = "";
			this.CivHistoryText.caption = "";
			return;
		}

		this.CivHistoryHeading.caption =
			this.page.formatHeading(
				sprintf(this.headingCaption, { "civilization": civInfo.Name }),
				this.page.SectionHeaderSize
			);

		this.CivHistoryText.caption = civInfo.History;
	}
}

HistorySection.prototype.headingCaption =
	translate("History of the %(civilization)s");
