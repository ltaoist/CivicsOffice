/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; fill-column: 100 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#pragma once

#include <rtl/ustring.hxx>

// Dialog Controls

inline constexpr OUStringLiteral RID_STR_CLASS_FIXEDTEXT = u"Label";
inline constexpr OUStringLiteral RID_STR_CLASS_FIXEDLINE = u"Line";
inline constexpr OUStringLiteral RID_STR_CLASS_IMAGECONTROL = u"Graphic";
inline constexpr OUStringLiteral RID_STR_CLASS_FORMATTEDFIELD = u"FormattedField";

//= service names

inline constexpr OUStringLiteral SERVICE_FIXEDTEXT = u"com.sun.star.report.FixedText";
inline constexpr OUStringLiteral SERVICE_FORMATTEDFIELD = u"com.sun.star.report.FormattedField";
inline constexpr OUStringLiteral SERVICE_IMAGECONTROL = u"com.sun.star.report.ImageControl";
inline constexpr OUStringLiteral SERVICE_FORMATCONDITION = u"com.sun.star.report.FormatCondition";
inline constexpr OUStringLiteral SERVICE_FUNCTION = u"com.sun.star.report.Function";
inline constexpr OUStringLiteral SERVICE_REPORTDEFINITION = u"com.sun.star.report.ReportDefinition";
inline constexpr OUStringLiteral SERVICE_SHAPE = u"com.sun.star.report.Shape";
inline constexpr OUStringLiteral SERVICE_FIXEDLINE = u"com.sun.star.report.FixedLine";
inline constexpr OUStringLiteral SERVICE_SECTION = u"com.sun.star.report.Section";
inline constexpr OUStringLiteral SERVICE_GROUP = u"com.sun.star.report.Group";

//= property names

#define PROPERTY_VISIBLE "Visible"
#define PROPERTY_NAME "Name"
#define PROPERTY_HEIGHT "Height"
#define PROPERTY_BACKCOLOR "BackColor"
#define PROPERTY_BACKTRANSPARENT "BackTransparent"
#define PROPERTY_CONTROLBACKGROUND "ControlBackground"
#define PROPERTY_CONTROLBACKGROUNDTRANSPARENT "ControlBackgroundTransparent"
#define PROPERTY_FORCENEWPAGE "ForceNewPage"
#define PROPERTY_NEWROWORCOL "NewRowOrCol"
#define PROPERTY_KEEPTOGETHER "KeepTogether"
#define PROPERTY_CANGROW "CanGrow"
#define PROPERTY_CANSHRINK "CanShrink"
#define PROPERTY_REPEATSECTION "RepeatSection"
#define PROPERTY_GROUP "Group"
#define PROPERTY_REPORTDEFINITION "ReportDefinition"

#define PROPERTY_GROUPINTERVAL "GroupInterval"
#define PROPERTY_EXPRESSION "Expression"
#define PROPERTY_GROUPON "GroupOn"
#define PROPERTY_SORTASCENDING "SortAscending"

#define PROPERTY_MASTERFIELDS "MasterFields"
#define PROPERTY_DETAILFIELDS "DetailFields"
#define PROPERTY_CAPTION "Caption"
#define PROPERTY_COMMAND "Command"
#define PROPERTY_BACKGRAPHICLOCATION "BackGraphicLocation"
#define PROPERTY_ORIENTATION "Orientation"
#define PROPERTY_PAPERSIZE "Size"
#define PROPERTY_GROUPKEEPTOGETHER "GroupKeepTogether"
#define PROPERTY_PAGEHEADEROPTION "PageHeaderOption"
#define PROPERTY_PAGEFOOTEROPTION "PageFooterOption"
#define PROPERTY_COMMANDTYPE "CommandType"
#define PROPERTY_REPORTHEADERON "ReportHeaderOn"
#define PROPERTY_REPORTFOOTERON "ReportFooterOn"
#define PROPERTY_PAGEHEADERON "PageHeaderOn"
#define PROPERTY_PAGEFOOTERON "PageFooterOn"
#define PROPERTY_HEADERON u"HeaderOn"
#define PROPERTY_FOOTERON u"FooterOn"
#define PROPERTY_WIDTH "Width"
#define PROPERTY_POSITIONX "PositionX"
#define PROPERTY_POSITIONY "PositionY"
#define PROPERTY_AUTOGROW "AutoGrow"
#define PROPERTY_MINHEIGHT "MinHeight"
#define PROPERTY_DATAFIELD "DataField"
#define PROPERTY_PARAADJUST "ParaAdjust"
#define PROPERTY_FONTDESCRIPTOR "FontDescriptor"
#define PROPERTY_FONTDESCRIPTORASIAN "FontDescriptorAsian"
#define PROPERTY_FONTDESCRIPTORCOMPLEX "FontDescriptorComplex"
#define PROPERTY_CONTROLTEXTEMPHASISMARK "ControlTextEmphasis"
#define PROPERTY_CHARRELIEF "CharRelief"
#define PROPERTY_CHARCOLOR "CharColor"
#define PROPERTY_VERTICALALIGN "VerticalAlign"
#define PROPERTY_IMAGEURL "ImageURL"
#define PROPERTY_CHARUNDERLINECOLOR "CharUnderlineColor"
#define PROPERTY_LABEL "Label"
#define PROPERTY_EFFECTIVEDEFAULT "EffectiveDefault"
#define PROPERTY_EFFECTIVEMAX "EffectiveMax"
#define PROPERTY_EFFECTIVEMIN "EffectiveMin"
#define PROPERTY_FORMATKEY "FormatKey"
#define PROPERTY_MAXTEXTLEN "MaxTextLen"
#define PROPERTY_FORMATSSUPPLIER "FormatsSupplier"
#define PROPERTY_CONTROLBORDER "ControlBorder"
#define PROPERTY_CONTROLBORDERCOLOR "ControlBorderColor"
#define PROPERTY_BORDER "Border"
#define PROPERTY_BORDERCOLOR "BorderColor"
#define PROPERTY_DEFAULTCONTROL "DefaultControl"

#define PROPERTY_LEFTMARGIN "LeftMargin"
#define PROPERTY_RIGHTMARGIN "RightMargin"
#define PROPERTY_TOPMARGIN "TopMargin"
#define PROPERTY_BOTTOMMARGIN "BottomMargin"

#define PROPERTY_PRINTREPEATEDVALUES "PrintRepeatedValues"
#define PROPERTY_CONDITIONALPRINTEXPRESSION "ConditionalPrintExpression"
#define PROPERTY_STARTNEWCOLUMN "StartNewColumn"
#define PROPERTY_RESETPAGENUMBER "ResetPageNumber"
#define PROPERTY_PRINTWHENGROUPCHANGE "PrintWhenGroupChange"
#define PROPERTY_STATE "State"
#define PROPERTY_TIME_STATE "TimeState"
#define PROPERTY_DATE_STATE "DateState"
#define PROPERTY_FONTCHARWIDTH    "FontCharWidth"
#define PROPERTY_FONTCHARSET      "CharFontCharSet"
#define PROPERTY_FONTFAMILY       "CharFontFamily"
#define PROPERTY_CHARFONTHEIGHT   "CharHeight"
#define PROPERTY_FONTHEIGHT       "FontHeight"
#define PROPERTY_FONTKERNING      "FontKerning"
#define PROPERTY_FONT             "FontDescriptor"
#define PROPERTY_FONTNAME         "FontName"
#define PROPERTY_FONTORIENTATION  "CharRotation"
#define PROPERTY_FONTPITCH        "CharFontPitch"
#define PROPERTY_CHARSTRIKEOUT    "CharStrikeout"
#define PROPERTY_FONTSTRIKEOUT    "FontStrikeout"
#define PROPERTY_FONTSTYLENAME    "CharFontStyleName"
#define PROPERTY_FONTUNDERLINE    "CharUnderline"
#define PROPERTY_FONTWEIGHT       "CharWeight"
#define PROPERTY_FONTWIDTH        "FontWidth"
#define PROPERTY_FONTTYPE         "FontType"

#define PROPERTY_ENABLED       "Enabled"

#define PROPERTY_CHAREMPHASIS     "CharEmphasis"
#define PROPERTY_CHARFONTNAME     "CharFontName"
#define PROPERTY_CHARFONTSTYLENAME "CharFontStyleName"
#define PROPERTY_CHARFONTFAMILY   "CharFontFamily"
#define PROPERTY_CHARFONTCHARSET  "CharFontCharSet"
#define PROPERTY_CHARFONTPITCH    "CharFontPitch"
#define PROPERTY_CHARHEIGHT       "CharHeight"
#define PROPERTY_CHARUNDERLINE    "CharUnderline"
#define PROPERTY_CHARWEIGHT       "CharWeight"
#define PROPERTY_CHARPOSTURE      "CharPosture"
#define PROPERTY_CHARWORDMODE     "CharWordMode"
#define PROPERTY_CHARROTATION     "CharRotation"
#define PROPERTY_CHARSCALEWIDTH   "CharScaleWidth"

// Asian
#define PROPERTY_CHAREMPHASISASIAN        "CharEmphasisAsian"
#define PROPERTY_CHARFONTNAMEASIAN        "CharFontNameAsian"
#define PROPERTY_CHARFONTSTYLENAMEASIAN   "CharFontStyleNameAsian"
#define PROPERTY_CHARFONTFAMILYASIAN      "CharFontFamilyAsian"
#define PROPERTY_CHARFONTCHARSETASIAN     "CharFontCharSetAsian"
#define PROPERTY_CHARFONTPITCHASIAN       "CharFontPitchAsian"
#define PROPERTY_CHARHEIGHTASIAN          "CharHeightAsian"
#define PROPERTY_CHARUNDERLINEASIAN       "CharUnderlineAsian"
#define PROPERTY_CHARWEIGHTASIAN          "CharWeightAsian"
#define PROPERTY_CHARPOSTUREASIAN         "CharPostureAsian"
#define PROPERTY_CHARWORDMODEASIAN        "CharWordModeAsian"
#define PROPERTY_CHARROTATIONASIAN        "CharRotationAsian"
#define PROPERTY_CHARSCALEWIDTHASIAN      "CharScaleWidthAsian"
#define PROPERTY_CHARLOCALEASIAN           "CharLocaleAsian"

// Complex
#define PROPERTY_CHAREMPHASISCOMPLEX      "CharEmphasisComplex"
#define PROPERTY_CHARFONTNAMECOMPLEX      "CharFontNameComplex"
#define PROPERTY_CHARFONTSTYLENAMECOMPLEX "CharFontStyleNameComplex"
#define PROPERTY_CHARFONTFAMILYCOMPLEX    "CharFontFamilyComplex"
#define PROPERTY_CHARFONTCHARSETCOMPLEX   "CharFontCharSetComplex"
#define PROPERTY_CHARFONTPITCHCOMPLEX     "CharFontPitchComplex"
#define PROPERTY_CHARHEIGHTCOMPLEX        "CharHeightComplex"
#define PROPERTY_CHARUNDERLINECOMPLEX     "CharUnderlineComplex"
#define PROPERTY_CHARWEIGHTCOMPLEX        "CharWeightComplex"
#define PROPERTY_CHARPOSTURECOMPLEX       "CharPostureComplex"
#define PROPERTY_CHARWORDMODECOMPLEX      "CharWordModeComplex"
#define PROPERTY_CHARROTATIONCOMPLEX      "CharRotationComplex"
#define PROPERTY_CHARSCALEWIDTHCOMPLEX    "CharScaleWidthComplex"
#define PROPERTY_CHARLOCALECOMPLEX        "CharLocaleComplex"

#define PROPERTY_STATUSINDICATOR  "StatusIndicator"
#define PROPERTY_SECTION          "Section"
#define PROPERTY_FILTER           "Filter"
#define PROPERTY_ESCAPEPROCESSING "EscapeProcessing"

#define PROPERTY_MULTILINE        "MultiLine"
#define PROPERTY_ACTIVECONNECTION "ActiveConnection"
#define PROPERTY_DATASOURCENAME   "DataSourceName"
#define PROPERTY_FORMULA          "Formula"
#define PROPERTY_INITIALFORMULA   "InitialFormula"
#define PROPERTY_PREEVALUATED     "PreEvaluated"
#define PROPERTY_DEEPTRAVERSING   "DeepTraversing"
#define PROPERTY_MIMETYPE         "MimeType"
#define PROPERTY_BACKGROUNDCOLOR  "BackgroundColor"
#define PROPERTY_TEXT             "Text"
#define PROPERTY_TEXTCOLOR        "TextColor"
#define PROPERTY_TEXTLINECOLOR   "TextLineColor"
#define PROPERTY_FONTRELIEF   "FontRelief"
#define PROPERTY_FONTEMPHASISMARK "FontEmphasisMark"
#define PROPERTY_ZORDER           "ZOrder"
#define PROPERTY_OPAQUE           "Opaque"
#define PROPERTY_TRANSFORMATION    "Transformation"
#define PROPERTY_CUSTOMSHAPEENGINE "CustomShapeEngine"
#define PROPERTY_CUSTOMSHAPEDATA   "CustomShapeData"
#define PROPERTY_CUSTOMSHAPEGEOMETRY "CustomShapeGeometry"

#define PROPERTY_NUMBERINGTYPE     "NumberingType"
#define PROPERTY_PAGESTYLELAYOUT   "PageStyleLayout"
#define PROPERTY_ISLANDSCAPE       "IsLandscape"
#define PROPERTY_ALIGN "Align"
#define PROPERTY_TYPE  "Type"

#define PROPERTY_PRESERVEIRI  "PreserveIRI"
#define PROPERTY_SCALEMODE  "ScaleMode"

#define PROPERTY_LINESTYLE  "LineStyle"
#define PROPERTY_LINEDASH  "LineDash"
#define PROPERTY_LINECOLOR  "LineColor"
#define PROPERTY_LINETRANSPARENCE  "LineTransparence"
#define PROPERTY_LINEWIDTH  "LineWidth"

#define PROPERTY_CHARFLASH            "CharFlash"
#define PROPERTY_CHARESCAPEMENTHEIGHT "CharEscapementHeight"
#define PROPERTY_CHARLOCALE           "CharLocale"
#define PROPERTY_CHARESCAPEMENT       "CharEscapement"
#define PROPERTY_CHARCASEMAP          "CharCaseMap"
#define PROPERTY_CHARCOMBINEISON      "CharCombineIsOn"
#define PROPERTY_CHARCOMBINEPREFIX    "CharCombinePrefix"
#define PROPERTY_CHARCOMBINESUFFIX    "CharCombineSuffix"
#define PROPERTY_CHARHIDDEN           "CharHidden"
#define PROPERTY_CHARSHADOWED         "CharShadowed"
#define PROPERTY_CHARCONTOURED        "CharContoured"
#define PROPERTY_CHARAUTOKERNING      "CharAutoKerning"
#define PROPERTY_CHARKERNING          "CharKerning"
#define PROPERTY_HYPERLINKURL "HyperLinkURL"
#define PROPERTY_HYPERLINKTARGET "HyperLinkTarget"
#define PROPERTY_HYPERLINKNAME "HyperLinkName"
#define PROPERTY_VISITEDCHARSTYLENAME "VisitedCharStyleName"
#define PROPERTY_UNVISITEDCHARSTYLENAME "UnvisitedCharStyleName"
#define PROPERTY_APPLYFILTER          "ApplyFilter"
#define PROPERTY_MAXROWS              "MaxRows"

#define PROPERTY_REPORTNAME "ReportName"
inline constexpr OUStringLiteral CFG_REPORTDESIGNER = u"SunReportBuilder";
inline constexpr OUStringLiteral DBREPORTHEADER = u"ReportHeader";
inline constexpr OUStringLiteral DBREPORTFOOTER = u"ReportFooter";
inline constexpr OUStringLiteral DBPAGEHEADER = u"PageHeader";
inline constexpr OUStringLiteral DBPAGEFOOTER = u"PageFooter";
inline constexpr OUStringLiteral DBGROUPHEADER = u"GroupHeader";
inline constexpr OUStringLiteral DBGROUPFOOTER = u"GroupFooter";
inline constexpr OUStringLiteral DBDETAIL = u"Detail";
inline constexpr OUStringLiteral REPORTCONTROLFORMAT = u"ReportControlFormat";
inline constexpr OUStringLiteral CURRENT_WINDOW = u"CurrentWindow";
#define PROPERTY_FONTCOLOR "FontColor"
#define PROPERTY_EMPTY_IS_NULL "ConvertEmptyToNull"
#define PROPERTY_FILTERPROPOSAL "UseFilterValueProposal"
#define PROPERTY_POSITION "Position"
#define PROPERTY_FORMATKEYDATE "FormatKeyDate"
#define PROPERTY_FORMATKEYTIME "FormatKeyTime"
inline constexpr OUStringLiteral DBOVERLAPPEDCONTROL = u"OverlappedControl";
#define PROPERTY_FORMULALIST "FormulaList"
#define PROPERTY_SCOPE "Scope"
#define PROPERTY_CHARTTYPE "ChartType"
#define PROPERTY_PREVIEW_COUNT "RowLimit"
#define PROPERTY_TITLE "Title"
#define PROPERTY_AREA "Area"
#define PROPERTY_FILLCOLOR "FillColor"
inline constexpr OUStringLiteral DBTEXTBOXBOUNDCONTENT = u"TextBoxBoundContent";

inline constexpr OUStringLiteral SERVICE_SETTINGSIMPORTER = u"com.sun.star.comp.Report.XMLOasisSettingsImporter";
inline constexpr OUStringLiteral SERVICE_STYLESIMPORTER = u"com.sun.star.comp.Report.XMLOasisStylesImporter";
inline constexpr OUStringLiteral SERVICE_CONTENTIMPORTER = u"com.sun.star.comp.Report.XMLOasisContentImporter";
inline constexpr OUStringLiteral SERVICE_METAIMPORTER = u"com.sun.star.comp.Report.XMLOasisMetaImporter";
#define PROPERTY_BORDERLEFT "BorderLeft"
#define PROPERTY_BORDERRIGHT "BorderRight"
#define PROPERTY_BORDERTOP "BorderTop"
#define PROPERTY_BORDERBOTTOM "BorderBottom"

/* vim:set shiftwidth=4 softtabstop=4 expandtab cinoptions=b1,g0,N-s cinkeys+=0=break: */
