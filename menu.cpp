#include "imgui.h"

// ─────────────────────────────────────────────
//  Aplica tema escuro moderno com cantos arredondados
// ─────────────────────────────────────────────
void AplicarTema() {
    ImGuiStyle& style = ImGui::GetStyle();

    // Arredondamento
    style.WindowRounding    = 12.0f;
    style.ChildRounding     = 8.0f;
    style.FrameRounding     = 6.0f;
    style.PopupRounding     = 8.0f;
    style.ScrollbarRounding = 6.0f;
    style.GrabRounding      = 6.0f;
    style.TabRounding       = 6.0f;

    // Espaçamento
    style.WindowPadding     = ImVec2(14.0f, 14.0f);
    style.FramePadding      = ImVec2(10.0f, 6.0f);
    style.ItemSpacing       = ImVec2(10.0f, 8.0f);
    style.ItemInnerSpacing  = ImVec2(6.0f, 4.0f);
    style.ScrollbarSize     = 10.0f;
    style.GrabMinSize       = 10.0f;
    style.WindowBorderSize  = 1.0f;
    style.FrameBorderSize   = 0.0f;

    // Paleta de cores
    ImVec4* c = style.Colors;

    c[ImGuiCol_WindowBg]         = ImVec4(0.08f, 0.08f, 0.10f, 1.00f);
    c[ImGuiCol_ChildBg]          = ImVec4(0.10f, 0.10f, 0.13f, 1.00f);
    c[ImGuiCol_PopupBg]          = ImVec4(0.10f, 0.10f, 0.13f, 1.00f);

    c[ImGuiCol_Border]           = ImVec4(0.22f, 0.22f, 0.28f, 1.00f);
    c[ImGuiCol_BorderShadow]     = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

    c[ImGuiCol_FrameBg]          = ImVec4(0.14f, 0.14f, 0.18f, 1.00f);
    c[ImGuiCol_FrameBgHovered]   = ImVec4(0.20f, 0.20f, 0.26f, 1.00f);
    c[ImGuiCol_FrameBgActive]    = ImVec4(0.24f, 0.24f, 0.30f, 1.00f);

    c[ImGuiCol_TitleBg]          = ImVec4(0.06f, 0.06f, 0.08f, 1.00f);
    c[ImGuiCol_TitleBgActive]    = ImVec4(0.08f, 0.08f, 0.12f, 1.00f);
    c[ImGuiCol_TitleBgCollapsed] = ImVec4(0.06f, 0.06f, 0.08f, 1.00f);

    c[ImGuiCol_MenuBarBg]        = ImVec4(0.10f, 0.10f, 0.13f, 1.00f);

    c[ImGuiCol_ScrollbarBg]      = ImVec4(0.08f, 0.08f, 0.10f, 1.00f);
    c[ImGuiCol_ScrollbarGrab]    = ImVec4(0.28f, 0.28f, 0.36f, 1.00f);
    c[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.50f, 1.00f);
    c[ImGuiCol_ScrollbarGrabActive]  = ImVec4(0.55f, 0.40f, 0.90f, 1.00f);

    // Cor de destaque — roxo vibrante
    c[ImGuiCol_CheckMark]        = ImVec4(0.75f, 0.50f, 1.00f, 1.00f);
    c[ImGuiCol_SliderGrab]       = ImVec4(0.65f, 0.40f, 0.95f, 1.00f);
    c[ImGuiCol_SliderGrabActive] = ImVec4(0.80f, 0.55f, 1.00f, 1.00f);

    c[ImGuiCol_Button]           = ImVec4(0.55f, 0.35f, 0.90f, 1.00f);
    c[ImGuiCol_ButtonHovered]    = ImVec4(0.65f, 0.45f, 1.00f, 1.00f);
    c[ImGuiCol_ButtonActive]     = ImVec4(0.45f, 0.28f, 0.78f, 1.00f);

    c[ImGuiCol_Header]           = ImVec4(0.55f, 0.35f, 0.90f, 0.40f);
    c[ImGuiCol_HeaderHovered]    = ImVec4(0.55f, 0.35f, 0.90f, 0.70f);
    c[ImGuiCol_HeaderActive]     = ImVec4(0.55f, 0.35f, 0.90f, 1.00f);

    c[ImGuiCol_Separator]        = ImVec4(0.22f, 0.22f, 0.28f, 1.00f);
    c[ImGuiCol_SeparatorHovered] = ImVec4(0.55f, 0.35f, 0.90f, 0.80f);
    c[ImGuiCol_SeparatorActive]  = ImVec4(0.55f, 0.35f, 0.90f, 1.00f);

    c[ImGuiCol_ResizeGrip]       = ImVec4(0.55f, 0.35f, 0.90f, 0.30f);
    c[ImGuiCol_ResizeGripHovered]= ImVec4(0.55f, 0.35f, 0.90f, 0.70f);
    c[ImGuiCol_ResizeGripActive] = ImVec4(0.55f, 0.35f, 0.90f, 1.00f);

    c[ImGuiCol_Tab]              = ImVec4(0.14f, 0.14f, 0.18f, 1.00f);
    c[ImGuiCol_TabHovered]       = ImVec4(0.55f, 0.35f, 0.90f, 0.80f);
    c[ImGuiCol_TabActive]        = ImVec4(0.45f, 0.28f, 0.78f, 1.00f);
    c[ImGuiCol_TabUnfocused]     = ImVec4(0.12f, 0.12f, 0.16f, 1.00f);
    c[ImGuiCol_TabUnfocusedActive]= ImVec4(0.30f, 0.20f, 0.55f, 1.00f);

    c[ImGuiCol_Text]             = ImVec4(0.92f, 0.92f, 0.96f, 1.00f);
    c[ImGuiCol_TextDisabled]     = ImVec4(0.45f, 0.45f, 0.55f, 1.00f);

    c[ImGuiCol_PlotLines]        = ImVec4(0.65f, 0.40f, 0.95f, 1.00f);
    c[ImGuiCol_PlotLinesHovered] = ImVec4(0.80f, 0.55f, 1.00f, 1.00f);
    c[ImGuiCol_PlotHistogram]    = ImVec4(0.65f, 0.40f, 0.95f, 1.00f);
    c[ImGuiCol_PlotHistogramHovered] = ImVec4(0.80f, 0.55f, 1.00f, 1.00f);

    c[ImGuiCol_ModalWindowDimBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.60f);
}

// ─────────────────────────────────────────────
//  Renderiza a janela principal do menu
// ─────────────────────────────────────────────
void RenderizarMenu() {
    AplicarTema();

    ImGui::SetNextWindowSize(ImVec2(420, 520), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowPos(ImVec2(100, 100), ImGuiCond_FirstUseEver);

    ImGuiWindowFlags flags =
        ImGuiWindowFlags_NoScrollbar |
        ImGuiWindowFlags_NoScrollWithMouse;

    ImGui::Begin("  Meu Projeto  ", nullptr, flags);

    // ── Cabeçalho ──────────────────────────────
    ImGui::Spacing();
    ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize("BEM-VINDO").x) * 0.5f);
    ImGui::TextColored(ImVec4(0.75f, 0.50f, 1.00f, 1.00f), "BEM-VINDO");

    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();

    // ── Abas ──────────────────────────────────
    if (ImGui::BeginTabBar("Abas")) {

        // ── Aba: Geral ─────────────────────────
        if (ImGui::BeginTabItem("  Geral  ")) {
            ImGui::Spacing();

            static bool opcao1 = false;
            static bool opcao2 = true;
            static bool opcao3 = false;

            ImGui::TextDisabled("Configuracoes gerais");
            ImGui::Spacing();

            ImGui::Checkbox("Opcao 1", &opcao1);
            ImGui::Checkbox("Opcao 2", &opcao2);
            ImGui::Checkbox("Opcao 3", &opcao3);

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            static float velocidade = 1.0f;
            ImGui::Text("Velocidade:");
            ImGui::SliderFloat("##vel", &velocidade, 0.1f, 10.0f, "%.1f");

            ImGui::Spacing();

            static float cor[3] = { 0.75f, 0.50f, 1.00f };
            ImGui::Text("Cor:");
            ImGui::ColorEdit3("##cor", cor);

            ImGui::Spacing();
            ImGui::Spacing();

            float btnW = ImGui::GetContentRegionAvail().x;
            if (ImGui::Button("Aplicar", ImVec2(btnW, 36))) {
                // ação ao clicar
            }

            ImGui::EndTabItem();
        }

        // ── Aba: Visual ────────────────────────
        if (ImGui::BeginTabItem("  Visual  ")) {
            ImGui::Spacing();
            ImGui::TextDisabled("Configuracoes visuais");
            ImGui::Spacing();

            static int resolucao = 1;
            const char* resolucoes[] = { "720p", "1080p", "1440p", "4K" };
            ImGui::Text("Resolucao:");
            ImGui::Combo("##res", &resolucao, resolucoes, IM_ARRAYSIZE(resolucoes));

            ImGui::Spacing();

            static bool fullscreen = false;
            static bool vsync      = true;
            ImGui::Checkbox("Tela cheia", &fullscreen);
            ImGui::Checkbox("VSync",      &vsync);

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            static float brilho = 1.0f;
            ImGui::Text("Brilho:");
            ImGui::SliderFloat("##bri", &brilho, 0.0f, 2.0f, "%.2f");

            static float contraste = 1.0f;
            ImGui::Text("Contraste:");
            ImGui::SliderFloat("##con", &contraste, 0.0f, 2.0f, "%.2f");

            ImGui::EndTabItem();
        }

        // ── Aba: Sobre ─────────────────────────
        if (ImGui::BeginTabItem("  Sobre  ")) {
            ImGui::Spacing();

            ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize("Meu Projeto v1.0").x) * 0.5f);
            ImGui::TextColored(ImVec4(0.75f, 0.50f, 1.00f, 1.00f), "Meu Projeto v1.0");

            ImGui::Spacing();
            ImGui::Spacing();

            ImGui::TextWrapped("Este é um projeto de exemplo usando ImGui com tema escuro personalizado.");

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            ImGui::TextDisabled("Desenvolvido com ImGui");
            ImGui::TextDisabled("github.com/ocornut/imgui");

            ImGui::EndTabItem();
        }

        ImGui::EndTabBar();
    }

    ImGui::End();
}
